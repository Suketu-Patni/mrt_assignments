import cv2
import numpy as np
import math
import random
import argparse
import os

class Nodes:
    """Class to store the RRT graph"""
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.parent_x = []
        self.parent_y = []
        
def collision(x1, y1, x2, y2):
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
def check_collision(x1, y1, x2, y2):
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
        directCon = not(collision(x, y, end[0], end[1]))

        # check connection between two nodes
        nodeCon = not(collision(x, y, x2, y2))

    return (x, y, directCon, nodeCon)


# return dist and angle b/w 2 given points
def dist_and_angle(x1, y1, x2, y2):
    dist = math.sqrt(((x1 - x2) ** 2) + ((y1 - y2) ** 2))
    angle = math.atan2(y2 - y1, x2 - x1)
    return (dist, angle)


# return the nearest node index
def nearest_node(x, y):
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

def prepare_final_path(start, end, x_coords, y_coords):
    path_list = []
    path_list.append(tuple(start))
    for (x, y) in zip(x_coords, y_coords):
        path_list.append((int(x), int(y)))
    path_list.append(tuple(end))

    return path_list
    ...


def RRT(img, img2, start, end, stepSize):
    h, l = img.shape  # dim of the loaded image

    # insert the starting point in the node class
    node_list[0] = Nodes(start[0], start[1])
    node_list[0].parent_x.append(start[0])
    node_list[0].parent_y.append(start[1])

    # display start and end
    # cv2.circle(img2, (start[0], start[1]), 5, (0, 0, 255), thickness=3, lineType=8)
    # cv2.circle(img2, (end[0], end[1]), 5, (0, 0, 255), thickness=3, lineType=8)

    i = 1
    pathFound = False
    while pathFound == False:
        nx, ny = rnd_point(h, l)

        nearest_ind = nearest_node(nx, ny)
        nearest_x = node_list[nearest_ind].x
        nearest_y = node_list[nearest_ind].y

        # check direct connection
        tx, ty, directCon, nodeCon = check_collision(nx, ny, nearest_x, nearest_y)

        if directCon and nodeCon:
            # print("Node can connect directly with end")
            node_list.append(i)
            node_list[i] = Nodes(tx, ty)
            node_list[i].parent_x = node_list[nearest_ind].parent_x.copy()
            node_list[i].parent_y = node_list[nearest_ind].parent_y.copy()
            node_list[i].parent_x.append(tx)
            node_list[i].parent_y.append(ty)

            # cv2.circle(
            #     img2, (int(tx), int(ty)), 2, (0, 0, 255), thickness=3, lineType=8
            # )
            # cv2.line(
            #     img2,
            #     (int(tx), int(ty)),
            #     (int(node_list[nearest_ind].x), int(node_list[nearest_ind].y)),
            #     (0, 255, 0),
            #     thickness=1,
            #     lineType=8,
            # )
            # cv2.line(
            #     img2,
            #     (int(tx), int(ty)),
            #     (end[0], end[1]),
            #     (255, 0, 0),
            #     thickness=2,
            #     lineType=8,
            # )

            print("Path has been found")
            # print("parent_x",node_list[i].parent_x)
            # for j in range(len(node_list[i].parent_x) - 1):
                # cv2.line(
                #     img2,
                #     (int(node_list[i].parent_x[j]), int(node_list[i].parent_y[j])),
                #     (
                #         int(node_list[i].parent_x[j + 1]),
                #         int(node_list[i].parent_y[j + 1]),
                #     ),
                #     (255, 0, 0),
                #     thickness=2,
                #     lineType=8,
                # )
            # cv2.waitKey(1)
            # cv2.imwrite("media/" + str(i) + ".jpg", img2)
            # cv2.imwrite("out.jpg", img2)
            # print()
            return prepare_final_path(start, end, node_list[i].parent_x, node_list[i].parent_y)
            break

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


# def draw_circle(event, x, y, flags, param):
#     global coordinates
#     if event == cv2.EVENT_LBUTTONDBLCLK:
#         cv2.circle(img2, (x, y), 5, (255, 0, 0), -1)
#         coordinates.append(x)
#         coordinates.append(y)


if __name__ == "__main__":

    parser = argparse.ArgumentParser(description="Below are the params:")
    imagePath = "trial.jpg"
    img = cv2.imread(imagePath, 0)
    (hy, hx) = img.shape
    # parser.add_argument(
    #     "-p",
    #     type=str,
    #     default="world2.png",
    #     metavar="ImagePath",
    #     action="store",
    #     dest="imagePath",
    #     help="Path of the image containing mazes",
    # )

    stepSize = int(((hx ** 2 + hy ** 2) ** 0.5)/100)
    # parser.add_argument(
    #     "-s",
    #     type=int,
    #     default=10,
    #     metavar="Stepsize",
    #     action="store",
    #     dest="stepSize",
    #     help="Step-size to be used for RRT branches",
    # )
    start = [0, 0]
    # parser.add_argument(
    #     "-start",
    #     type=int,
    #     default=[20, 20],
    #     metavar="startCoord",
    #     dest="start",
    #     nargs="+",
    #     help="Starting position in the maze",
    # )
    stop = [hx - 1, hy - 1]
    # parser.add_argument(
    #     "-stop",
    #     type=int,
    #     default=[2000, 900],
    #     metavar="stopCoord",
    #     dest="stop",
    #     nargs="+",
    #     help="End position in the maze",
    # )
    # parser.add_argument(
    #     "-selectPoint",
    #     help="Select start and end points from figure",
    #     action="store_true",
    # )

    # args = parser.parse_args()

    # remove previously stored data
    try:
        os.system("rm -rf media")
    except:
        print("Dir already clean")
    os.mkdir("media")

      # load grayscale maze image
    img2 = cv2.imread(imagePath)  # load colored maze image
    start = tuple(start)  # (20,20) # starting coordinate
    end = tuple(stop)  # (450,250) # target coordinate
    stepSize = stepSize  # stepsize for RRT
    node_list = [0]  # list to store all the node points

    coordinates = []
    # if args.selectPoint:
    #     print("Select start and end points by double clicking, press 'escape' to exit")
    #     cv2.namedWindow("image")
    #     cv2.setMouseCallback("image", draw_circle)
    #     while 1:
    #         cv2.imshow("image", img2)
    #         k = cv2.waitKey(20) & 0xFF
    #         if k == 27:
    #             break
    #     # print(coordinates)
    #     start = (coordinates[0], coordinates[1])
    #     end = (coordinates[2], coordinates[3])

    # run the RRT algorithm
    RRT(img, img2, start, end, stepSize)