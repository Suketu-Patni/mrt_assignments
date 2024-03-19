import cv2 as cv
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from interfaces.srv import BoundingBoxes

def detect_aruco(image):

    arucoDict = cv.aruco.getPredefinedDictionary(cv.aruco.DICT_4X4_250)
    parameters =  cv.aruco.DetectorParameters()
    detector = cv.aruco.ArucoDetector(arucoDict, parameters)

    return detector.detectMarkers(image)

class MinimalService(Node):

    def __init__(self):
        super().__init__('arucotag_detector')
        self.srv = self.create_service(BoundingBoxes, 'find_bounds_of_arucotags', self.find_bounds)

    def find_bounds(self, request, response):
        img_msg = request.img 
        bridge = CvBridge()
        cv_image = bridge.imgmsg_to_cv2(img_msg, desired_encoding='passthrough')

        shape = cv_image.shape
        width = shape[0]
        height = shape[1]

        (corners, ids, _) = detect_aruco(cv_image)

        response.aruco_ids = [int(i) for i in ids.flatten()]
        bound_coordinates = [width, height]

        for corner in corners:
            bound_coordinates.extend([int(j) for j in corner.flatten()])

        response.bounding_boxes = bound_coordinates
        
        # self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()