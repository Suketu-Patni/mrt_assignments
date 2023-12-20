import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import random as rnd


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('d_rover1')
        self.publisher_ = self.create_publisher(Float32, 'topic_1', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    def timer_callback(self):
        altitude = Float32()
        altitude.data = rnd.random() * 100.0
        self.publisher_.publish(altitude)
        self.get_logger().info(f"DaughterRover1 Altitude: ({altitude.data})")


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
