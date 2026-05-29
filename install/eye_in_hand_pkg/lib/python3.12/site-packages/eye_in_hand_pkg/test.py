#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
from std_msgs.msg import String


class RobotTest(Node):
    def __init__(self):
        super().__init__('robot_test')

        self.status_publisher = self.create_publisher(
            String,
            '/robot_status',
            10
        )

        self.create_service(Trigger, '/start_robot', self.start_callback)
        self.create_service(Trigger, '/stop_robot', self.stop_callback)
        self.create_service(Trigger, '/reset_robot', self.reset_callback)

        self.get_logger().info("Robot test services gestart")

        # Beginstatus naar HMI sturen
        self.publish_status("Robot ready")

    def publish_status(self, status):
        msg = String()
        msg.data = status
        self.status_publisher.publish(msg)
        self.get_logger().info(f"Status gepubliceerd: {status}")

    def start_callback(self, request, response):
        self.publish_status("Running")

        response.success = True
        response.message = "Robot gestart"
        return response

    def stop_callback(self, request, response):
        self.publish_status("Stand-by")

        response.success = True
        response.message = "Robot gestopt"
        return response

    def reset_callback(self, request, response):
        self.publish_status("Robot ready")

        response.success = True
        response.message = "Robot gereset"
        return response


def main():
    rclpy.init()

    node = RobotTest()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()