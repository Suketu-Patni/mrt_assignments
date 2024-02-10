import cv2

webcam = cv2.VideoCapture(0)

check, frame = webcam.read()
print(check) #prints true as long as the webcam is running
print(frame) #prints matrix values of each framecd 
cv2.imshow("Capturing", frame)
wait = cv2.waitKey(2000)