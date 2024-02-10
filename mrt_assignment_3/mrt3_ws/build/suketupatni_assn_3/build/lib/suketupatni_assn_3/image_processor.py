import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('processor')
        self.subscription = self.create_subscription(
            Image,
            'topic1',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, img_msg):
        bridge = CvBridge()
        cv_image = bridge.imgmsg_to_cv2(img_msg, desired_encoding='passthrough')
        # greyed
        canny_edged_stackable = convert_grey1_to_grey3(auto_canny(cv_image))
        imgs_stacked = cv2.hconcat([cv_image, canny_edged_stackable])
        cv2.imshow("Original + Canny Edge Detected", imgs_stacked)
        wait = cv2.waitKey(3000)
        cv2.destroyAllWindows()
        self.get_logger().info("Camera img received and processed")


def auto_canny(img, num_channels = 3):
    # determines minval and maxval for running the canny edge detection function
    # by using avg of all pixel values of an image
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
    # allows horizontal stacking of rgb images with cannied bw images
    (row, col) = img.shape[:2]
    new_img = np.zeros((row, col, 3), dtype=np.uint8)
    for i in range(row):
        for j in range(col):
            temp = img[i][j]
            new_img[i][j] = [temp, temp, temp]

    return new_img


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()