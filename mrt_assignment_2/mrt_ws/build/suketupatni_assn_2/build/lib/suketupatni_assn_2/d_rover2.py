import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
import random as rnd


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('d_rover2')
        self.publisher_ = self.create_publisher(Point, 'topic_2', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    def timer_callback(self):
        current_loc = Point()
        (current_loc.data.x, current_loc.data.y, current_loc.data.z) = (rnd.random * 200, rnd.random * 200, rnd.random * 200)
        self.publisher_.publish(current_loc)
        self.get_logger().info(f"DaughterRover2 Location: ({current_loc.data.x}, {current_loc.data.y}, {current_loc.data.z})")


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
