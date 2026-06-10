from rclpy.node import Node
from std_msgs.msg import String


class HMIStatus(Node):
    def __init__(self):
        super().__init__('hmi_status')

        self.latest_status = "Starting up"

        self.status_subscriber = self.create_subscription(
            String,
            '/robot_status',
            self.status_callback,
            10
        )

    def status_callback(self, msg):
        self.latest_status = msg.data
        self.get_logger().info(f"Received status: {self.latest_status}")

#----------------------------------------------------------------------
# Subscriber van de robot_status topic