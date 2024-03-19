import cv2
import numpy as np
from interfaces.srv import Path
import rclpy
from rclpy.node import Node
import math
import random

# RRT CODE
# -------------------------------

class Nodes:
    """Class to store the RRT graph"""
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.parent_x = []
        self.parent_y = []
        
def collision(x1, y1, x2, y2, img):
    # checks if there is any obstacle between points (x1, y1) and (x2, y2)
    steps = img.shape[1] # shape return height, width, number_of_pixel_channels
    x = np.arange(x1, x2, (x2-x1)/steps)
    y = ((y2 - y1) / (x2 - x1)) * (x - x1) + y1
    for i in range(steps):
        temp = img[int(y[i]), int(x[i])]
        if temp == 0: # 0 (black) denotes a collision
            return True
        
    return False


# check the  collision with obstacle and trim
def check_collision(x1, y1, x2, y2, img, stepSize, end):
    _, theta = dist_and_angle(x2, y2, x1, y1)
    x = x2 + stepSize * np.cos(theta)
    y = y2 + stepSize * np.sin(theta)

    # TODO: trim the branch if its going out of image area
    hy, hx = img.shape
    if y < 0 or y > hy or x < 0 or x > hx:
        # print("Point out of image bound")
        directCon = False
        nodeCon = False
    else:
        # check direct connection
        directCon = not(collision(x, y, end[0], end[1], img))

        # check connection between two nodes
        nodeCon = not(collision(x, y, x2, y2, img))

    return (x, y, directCon, nodeCon)


# return dist and angle b/w 2 given points
def dist_and_angle(x1, y1, x2, y2):
    dist = math.sqrt(((x1 - x2) ** 2) + ((y1 - y2) ** 2))
    angle = math.atan2(y2 - y1, x2 - x1)
    return (dist, angle)


# return the nearest node index
def nearest_node(x, y, node_list):
    temp_dist = []
    for i in range(len(node_list)):
        dist, _ = dist_and_angle(x, y, node_list[i].x, node_list[i].y)
        temp_dist.append(dist)
    return temp_dist.index(min(temp_dist))


# generate a random point in the image space
def rnd_point(h, l):
    new_y = random.randint(0, h)
    new_x = random.randint(0, l)
    return (new_x, new_y)

def prepare_final_path(end, x_coords, y_coords):
    path_list = [] # start already in x, y coordinates
    for (x, y) in zip(x_coords, y_coords):
        path_list.append(int(x))
        path_list.append(int(y))
    path_list.extend(tuple(end))

    return path_list


def RRT(img, start, end, stepSize):
    node_list = [0]
    h, l = img.shape  # dim of the loaded image

    # insert the starting point in the node class
    node_list[0] = Nodes(start[0], start[1])
    node_list[0].parent_x.append(start[0])
    node_list[0].parent_y.append(start[1])

    i = 1
    pathFound = False
    while pathFound == False:
        nx, ny = rnd_point(h, l)

        nearest_ind = nearest_node(nx, ny, node_list)
        nearest_x = node_list[nearest_ind].x
        nearest_y = node_list[nearest_ind].y

        # check direct connection
        tx, ty, directCon, nodeCon = check_collision(nx, ny, nearest_x, nearest_y, img, stepSize, end)

        if directCon and nodeCon:
            # print("Node can connect directly with end")
            node_list.append(i)
            node_list[i] = Nodes(tx, ty)
            node_list[i].parent_x = node_list[nearest_ind].parent_x.copy()
            node_list[i].parent_y = node_list[nearest_ind].parent_y.copy()
            node_list[i].parent_x.append(tx)
            node_list[i].parent_y.append(ty)

            # print("Path has been found")
            temp = prepare_final_path(end, node_list[i].parent_x, node_list[i].parent_y)
            # print(temp)
            return temp

        elif nodeCon:
            # print("Nodes connected")
            node_list.append(i)
            node_list[i] = Nodes(tx, ty)
            node_list[i].parent_x = node_list[nearest_ind].parent_x.copy()
            node_list[i].parent_y = node_list[nearest_ind].parent_y.copy()
            # print(i)
            # print(node_list[nearest_ind].parent_y)
            node_list[i].parent_x.append(tx)
            node_list[i].parent_y.append(ty)
            i = i + 1
            continue

        else:
            continue


def rrt(img):

    # imagePath = "trial.jpg"
    # img = cv2.imread(imagePath, 0)
    (hy, hx) = img.shape

    stepSize = int(((hx ** 2 + hy ** 2) ** 0.5)/100)  # stepsize for RRT
    start = [0, 0]
    stop = [hx - 1, hy - 1]

    # load grayscale maze image
    # img = cv2.imread(imagePath, 0)  # load colored maze image
    start = tuple(start)  # (20,20) # starting coordinate
    end = tuple(stop)
      # list to store all the node points

    # coordinates = []
    return RRT(img, start, end, stepSize)

# -------------------------------

def generate_image(img_shape, boxes):
    image = np.ones(img_shape, dtype=np.int32)*255
    
    for box in boxes:
        vertex_array = np.array([[v[1], v[0]] for v in box])
        print(vertex_array)

        cv2.fillPoly(image, [vertex_array], 0)

    return image

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Path, 'find_path_between_arucotags', self.find_path)

    def find_path(self, request, response):
        shape_and_corners = request.bounding_boxes
        shape = tuple(shape_and_corners[:2])
        corners = shape_and_corners[2:]
        num_boxes = len(corners)//8

        boxes_list = []

        for i in range(num_boxes):
            cornerset = corners[8*i:8*i+8]
            v1 = (cornerset[1], cornerset[0])
            v2 = (cornerset[3], cornerset[2])
            v3 = (cornerset[5], cornerset[4])
            v4 = (cornerset[7], cornerset[6])
            # v1 and v4 have same abscissa
            # v2 and v3 have same abscissa
            box = (v1, v2, v3, v4)
            boxes_list.append(box)

            
        equivalent_image = generate_image(shape, boxes_list)
        path_found = rrt(equivalent_image)

        response.path = path_found

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()