import cv2
import numpy as np

webcam = cv2.VideoCapture(0)

_check, frame = webcam.read()
# print(check) #prints true as long as the webcam is running
# print(frame) #prints matrix values of each framecd 
# cv2.imshow("Original", frame)
# wait = cv2.waitKey(2000)

# canny edge detection - first convert to greyscale

grey = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
print(frame, grey, file = "file1.txt")
# print(frame[0], "\nnigga\n", grey[0])
# grey_in_3d = np.atleast_3d(grey)
# print(frame.type(), grey.type())
# hstacked = cv2.hconcat([frame, grey])
# cv2.imshow("Greyscale", hstacked)
# wait = cv2.waitKey(2000)
# cv2.destroyAllWindows()