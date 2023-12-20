import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import random as rnd


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('d_rover3')
        self.publisher_ = self.create_publisher(String, 'topic_3', 10)
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    def timer_callback(self):
        mission_status = String()
        rand_int = rnd.randint(1, 10)
        mission_status_str = f"{rand_int} -> "
        if rand_int >= 5:
            mission_status_str += "Task accomplished"
        else:
            mission_status_str += "Mission failed"

        mission_status.data = mission_status_str
        self.publisher_.publish(mission_status)
        self.get_logger().info(f"DaughterRover3 Mission Status: ({mission_status.data})")


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
