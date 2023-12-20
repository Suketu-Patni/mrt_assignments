import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from drover4_info_interface.msg import DRover4Info
import random as rnd


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('d_rover4')
        self.publisher_ = self.create_publisher(DRover4Info, 'topic_4', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    def timer_callback(self):
        info1 = DRover4Info()
        info1.rover_id = rnd.randint(0, 10000)
        info1.battery_level = rnd.random() * 100
        info1.current_location.position.x = rnd.random() * 200 - 100
        info1.current_location.position.y = rnd.random() * 200 - 100
        info1.current_location.position.z = rnd.random() * 200 - 100
        info1.health_status = "Good" if rnd.randint(1, 10) % 2 == 0 else "Bad"
        self.publisher_.publish(info1)
        self.get_logger().info("DaughterRover4 Info Published")


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
