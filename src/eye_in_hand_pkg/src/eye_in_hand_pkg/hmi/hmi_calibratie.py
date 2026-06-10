#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Point
from std_srvs.srv import Trigger


class HMICalibratie(Node):
    def __init__(self):
        super().__init__('hmi_calibratie')

#----------------------------------------------------------------------
# Subscribers voor de XYZ-waarden van robot en camera, en client voor de calibratie service

        self.latest_robot_xyz = None
        self.latest_camera_xyz = None

        self.robot_xyz_subscriber = self.create_subscription(
            Point,
            '/xyz_robot',
            self.robot_xyz_callback,
            10
        )

        self.camera_xyz_subscriber = self.create_subscription(
            Point,
            '/xyz_camera',
            self.camera_xyz_callback,
            10
        )

        self.calibration_client = self.create_client(
            Trigger,
            '/calibrate'
        )

        self.get_logger().info('hmi_calibratie node gestart')

    def robot_xyz_callback(self, msg):
        self.latest_robot_xyz = msg
        self.get_logger().info(
            f"Robot XYZ ontvangen: X={msg.x}, Y={msg.y}, Z={msg.z}"
        )

    def camera_xyz_callback(self, msg):
        self.latest_camera_xyz = msg
        self.get_logger().info(
            f"Camera XYZ ontvangen: X={msg.x}, Y={msg.y}, Z={msg.z}"
        )

    def calibrate(self):
        if not self.calibration_client.wait_for_service(timeout_sec=0.5):
            self.get_logger().error('Service /calibrate niet beschikbaar')
            return

        request = Trigger.Request()
        future = self.calibration_client.call_async(request)
        future.add_done_callback(self.calibration_response_callback)

        self.get_logger().info('Calibratie service aangeroepen')

    def calibration_response_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(
                f"Calibratie resultaat: success={response.success}, message={response.message}"
            )
        except Exception as e:
            self.get_logger().error(f"Fout bij calibratie service: {e}")

    def get_robot_xyz_text(self):
        if self.latest_robot_xyz is None:
            return "Robot: -, -, -"

        return (
            f"Robot: "
            f"{self.latest_robot_xyz.x:.2f}, "
            f"{self.latest_robot_xyz.y:.2f}, "
            f"{self.latest_robot_xyz.z:.2f}"
        )

    def get_camera_xyz_text(self):
        if self.latest_camera_xyz is None:
            return "Camera: -, -, -"

        return (
            f"Camera: "
            f"{self.latest_camera_xyz.x:.2f}, "
            f"{self.latest_camera_xyz.y:.2f}, "
            f"{self.latest_camera_xyz.z:.2f}"
        )


def main():
    rclpy.init()
    node = HMICalibratie()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()