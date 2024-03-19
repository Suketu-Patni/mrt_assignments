import cv2 as cv
import numpy as np
import random
import argparse
import os
import math


class Nodes:
    """Class to store the RRT graph"""

    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.parent_x = []
        self.parent_y = []


# check collision
def collision(x1, y1, x2, y2, img):
    # color = []
    x = np.arange(x1, x2, 1)
    y = ((y2 - y1) / (x2 - x1)) * (x - x1) + y1
    # print("collision",x,y)
    for i in range(int(x2-x1)):
        # print(int(x[i]),int(y[i]))
        temp = img[int(y[i])][int(x[i])]
        if temp == 0: # 0 (black) denotes a collision
            return True
        
    return False


# check the  collision with obstacle and trim
def check_collision(x1, y1, x2, y2, img):
    _, theta = dist_and_angle(x2, y2, x1, y1)
    x = x2 + stepSize * np.cos(theta)
    y = y2 + stepSize * np.sin(theta)
    # print(x2, y2, x1, y1)
    # print("theta", theta)
    # print("check_collision", x, y)

    # TODO: trim the branch if its going out of image area
    # print("Image shape",img.shape)
    hy, hx = img.shape
    if y < 0 or y > hy or x < 0 or x > hx:
        print("Point out of image bound")
        directCon = False
        nodeCon = False
    else:
        # check direct connection
        if collision(x, y, end[0], end[1], img):
            directCon = False
        else:
            directCon = True

        # check connection between two nodes
        if collision(x, y, x2, y2, img):
            nodeCon = False
        else:
            nodeCon = True

    return (x, y, directCon, nodeCon)


# return dist and angle b/w new point and nearest node
def dist_and_angle(x1, y1, x2, y2):
    dist = np.sqrt(((x1 - x2) ** 2) + ((y1 - y2) ** 2))
    angle = math.atan2(y2 - y1, x2 - x1)
    return (dist, angle)


# return the neaerst node index
def nearest_node(x, y):
    temp_dist = []
    for i in range(len(node_list)):
        dist, _ = dist_and_angle(x, y, node_list[i].x, node_list[i].y)
        temp_dist.append(dist)
    return temp_dist.index(min(temp_dist))


# generate a random point in the image space
def rnd_point(h, l):
    new_y = random.randrange(0, h)
    new_x = random.randrange(0, l)
    return (new_x, new_y)


def RRT(img, img2, start, end, stepSize):
    h, l = img.shape  # dim of the loaded image
    # print(img.shape) # (384, 683)
    # print(h,l)

    # insert the starting point in the node class
    # node_list = [0] # list to store all the node points
    node_list[0] = Nodes(start[0], start[1])
    node_list[0].parent_x.append(start[0])
    node_list[0].parent_y.append(start[1])

    # display start and end
    cv.circle(img2, (start[0], start[1]), 5, (0, 0, 255), thickness=3, lineType=8)
    cv.circle(img2, (end[0], end[1]), 5, (0, 0, 255), thickness=3, lineType=8)

    i = 1
    pathFound = False
    while pathFound == False:
        nx, ny = rnd_point(h, l)
        print("Random points:", nx, ny)

        nearest_ind = nearest_node(nx, ny)
        nearest_x = node_list[nearest_ind].x
        nearest_y = node_list[nearest_ind].y
        print("Nearest node coordinates:", nearest_x, nearest_y)

        # check direct connection
        tx, ty, directCon, nodeCon = check_collision(nx, ny, nearest_x, nearest_y, img)
        print("Check collision:", tx, ty, directCon, nodeCon)

        if directCon and nodeCon:
            print("Node can connect directly with end")
            node_list.append(i)
            node_list[i] = Nodes(tx, ty)
            node_list[i].parent_x = node_list[nearest_ind].parent_x.copy()
            node_list[i].parent_y = node_list[nearest_ind].parent_y.copy()
            node_list[i].parent_x.append(tx)
            node_list[i].parent_y.append(ty)

            cv.circle(img2, (int(tx), int(ty)), 2, (0, 0, 255), thickness=3, lineType=8)
            cv.line(
                img2,
                (int(tx), int(ty)),
                (int(node_list[nearest_ind].x), int(node_list[nearest_ind].y)),
                (0, 255, 0),
                thickness=1,
                lineType=8,
            )
            cv.line(
                img2,
                (int(tx), int(ty)),
                (end[0], end[1]),
                (255, 0, 0),
                thickness=2,
                lineType=8,
            )

            print("Path has been found")
            # print("parent_x",node_list[i].parent_x)
            for j in range(len(node_list[i].parent_x) - 1):
                cv.line(
                    img2,
                    (int(node_list[i].parent_x[j]), int(node_list[i].parent_y[j])),
                    (
                        int(node_list[i].parent_x[j + 1]),
                        int(node_list[i].parent_y[j + 1]),
                    ),
                    (255, 0, 0),
                    thickness=2,
                    lineType=8,
                )
            # cv.waitKey(1)
            cv.imwrite("media/" + str(i) + ".jpg", img2)
            cv.imwrite("out.jpg", img2)
            break

        elif nodeCon:
            print("Nodes connected")
            node_list.append(i)
            node_list[i] = Nodes(tx, ty)
            node_list[i].parent_x = node_list[nearest_ind].parent_x.copy()
            node_list[i].parent_y = node_list[nearest_ind].parent_y.copy()
            # print(i)
            # print(node_list[nearest_ind].parent_y)
            node_list[i].parent_x.append(tx)
            node_list[i].parent_y.append(ty)
            i = i + 1
            # display
            cv.circle(img2, (int(tx), int(ty)), 2, (0, 0, 255), thickness=3, lineType=8)
            cv.line(
                img2,
                (int(tx), int(ty)),
                (int(node_list[nearest_ind].x), int(node_list[nearest_ind].y)),
                (0, 255, 0),
                thickness=1,
                lineType=8,
            )
            cv.imwrite("media/" + str(i) + ".jpg", img2)
            cv.imshow("sdc", img2)
            cv.waitKey(100)
            continue

        else:
            print("No direct con. and no node con. :( Generating new rnd numbers")
            continue
    cv.waitKey(5000)


def draw_circle(event, x, y, flags, param):
    global coordinates
    if event == cv.EVENT_LBUTTONDBLCLK:
        cv.circle(img2, (x, y), 5, (255, 0, 0), -1)
        coordinates.append(x)
        coordinates.append(y)


if __name__ == "__main__":

    # parser = argparse.ArgumentParser(description="Below are the params:")
    # parser.add_argument(
    #     "-p",
    #     type=str,
    #     default="world2.png",
    #     metavar="ImagePath",
    #     action="store",
    #     dest="imagePath",
    #     help="Path of the image containing mazes",
    # )
    # parser.add_argument(
    #     "-s",
    #     type=int,
    #     default=10,
    #     metavar="Stepsize",
    #     action="store",
    #     dest="stepSize",
    #     help="Step-size to be used for RRT branches",
    # )
    # parser.add_argument(
    #     "-start",
    #     type=int,
    #     default=[20, 20],
    #     metavar="startCoord",
    #     dest="start",
    #     nargs="+",
    #     help="Starting position in the maze",
    # )
    # parser.add_argument(
    #     "-stop",
    #     type=int,
    #     default=[450, 250],
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

    # # remove previously stored data
    # try:
    #     os.system("rm -rf media")
    # except:
    #     print("Dir already clean")
    # os.mkdir("media")

    mainfile = "world2.png"
    start = (20, 20)
    end = (450, 250)
    stepSize = 20
    select_manually = False

    img = cv.imread(mainfile, 0)  # load grayscale maze image
    img2 = cv.imread(mainfile)  # load colored maze image
    # start = tuple(args.start)  # (20,20) # starting coordinate
    # end = tuple(args.stop)  # (450,250) # target coordinate
    # stepSize = args.stepSize  # stepsize for RRT
    node_list = [0]  # list to store all the node points

    coordinates = []
    if select_manually:
        print("Select start and end points by double clicking, press 'escape' to exit")
        cv.namedWindow("image")
        cv.setMouseCallback("image", draw_circle)
        while 1:
            cv.imshow("image", img2)
            k = cv.waitKey(20) & 0xFF
            if k == 27:
                break
        # print(coordinates)
        start = (coordinates[0], coordinates[1])
        end = (coordinates[2], coordinates[3])

    # run the RRT algorithm
    RRT(img, img2, start, end, stepSize)
