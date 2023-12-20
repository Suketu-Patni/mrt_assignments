import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, String
from geometry_msgs.msg import Point


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('basestation')
        self.subscription = self.create_subscription(
            Float32,
            'topic_1',
            self.listen_to_drover1,
            10)
           
        self.subscription = self.create_subscription(
            Point,
            'topic_2',
            self.listen_to_drover2,
            10)
            
        self.subscription = self.create_subscription(
            String,
            'topic_3',
            self.listen_to_drover3,
            10)
        self.subscription  # prevent unused variable warning

    def listen_to_drover1(self, altitude_msg):
        self.get_logger().info(f"Altitude received from DaughterRover1: ({altitude_msg.data})")
        
    def listen_to_drover2(self, location):
    	self.get_logger().info(f"Location received from DaughterRover2: ({location.x}, {location.y}, {location.z})")
    	
    def listen_to_drover3(self, mission_status):
    	self.get_logger().info(f"Mission Status received from DaughterRover3: '{mission_status.data}'")


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
