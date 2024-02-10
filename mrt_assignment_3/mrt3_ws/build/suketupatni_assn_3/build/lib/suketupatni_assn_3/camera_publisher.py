import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(Image, 'topic1', 10)
        timer_period = 3  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        bridge = CvBridge()
        webcam = cv2.VideoCapture(0)
        _check, image_from_webcam = webcam.read()
        # cv2.imshow("Capturing", frame)
        # wait = cv2.waitKey(2000)
        image_message = bridge.cv2_to_imgmsg(image_from_webcam, encoding="passthrough")
        self.publisher_.publish(image_message)
        self.get_logger().info(f"Camera img published")


def main(args=None):
    rclpy.init(args=args)

    image_publisher = MinimalPublisher()

    rclpy.spin(image_publisher)

    image_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


