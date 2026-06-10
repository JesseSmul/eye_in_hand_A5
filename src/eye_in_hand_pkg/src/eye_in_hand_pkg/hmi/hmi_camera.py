from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

#----------------------------------------------------------------------
# Subscriber van de beeld_camera topic
class HMICamera(Node):
    def __init__(self):
        super().__init__('hmi_camera')

        self.bridge = CvBridge()
        self.latest_frame = None

        self.camera_subscriber = self.create_subscription(
            Image,
            '/beeld_camera',
            self.camera_callback,
            10
        )

        self.get_logger().info('hmi_camera node gestart')

    def camera_callback(self, msg):
        try:
            self.latest_frame = self.bridge.imgmsg_to_cv2(
                msg,
                desired_encoding='bgr8'
            )
        except Exception as e:
            self.get_logger().error(f'Camera beeld conversie fout: {e}')

    def get_latest_frame(self):
        return self.latest_frame
    
