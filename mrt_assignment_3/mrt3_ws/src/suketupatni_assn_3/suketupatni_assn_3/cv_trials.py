import cv2
import numpy as np
# import sys
# np.set_printoptions(threshold=sys.maxsize)


def auto_canny(img, num_channels = 3):
    (row, col) = img.shape[:2]
    num_val = 0
    sum_val = 0
    for i in range(row):
        for j in range(col):
            num_val += num_channels
            sum_val += np.sum(img[i][j])

    avg = sum_val/num_val
    min = 2 * avg/3
    max = 4 * avg/3
    edged = cv2.Canny(img, min, max)
    return edged


def convert_grey1_to_grey3(img):
    (row, col) = img.shape[:2]
    new_img = np.zeros((row, col, 3), dtype=np.uint8)
    for i in range(row):
        for j in range(col):
            temp = img[i][j]
            new_img[i][j] = [temp, temp, temp]

    return new_img

"""
def convert_to_grey3(img):
    # converts to greyscale traditionally i.e. avg of rgb values
    # required to keep shape of greyscale and original image the same
    (row, col) = img.shape[:2]
    grey_img = np.zeros((row, col, 3), dtype=np.uint8)

    for i in range(row):
        for j in range(col):
            avg = int(round(sum(img[i][j])/3.0))
            grey_img[i][j] = [avg, avg, avg]

    return grey_img

webcam = cv2.VideoCapture(0)

_check, frame = webcam.read()
canny_on_original = auto_canny(frame)

# canny edge detection - first convert to greyscale

my_grey = convert_to_grey3(frame)
canny_on_my_grey = auto_canny(my_grey)

cv2.imwrite("original.png", frame)
cv2.imwrite("my_grey.png", my_grey)
cv2.imwrite("canny_on_my_grey.png", canny_on_my_grey)
cv2.imwrite("canny_on_original.png", canny_on_original)

# hstacked = cv2.hconcat([canny_on_original, canny_on_my_grey])
# cv2.imshow("Original", frame)
# cv2.imshow("Greyscale", hstacked)
# wait = cv2.waitKey(10000)
# cv2.destroyAllWindows()
"""

webcam = cv2.VideoCapture(0)

_check, frame = webcam.read()
canny_on_original = auto_canny(frame)
threed_canny = convert_grey1_to_grey3(canny_on_original)
# print(threed_canny)
hstacked = cv2.hconcat([frame, threed_canny])
cv2.imshow("Stacked", hstacked)
wait = cv2.waitKey(10000)
cv2.destroyAllWindows()
# with open("canny_contents.txt", "w") as fs:
#     fs.write(str(canny_on_original))
# print(str(canny_on_original), file = "canny_contents.txt")