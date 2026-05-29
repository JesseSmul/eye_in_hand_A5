#!/usr/bin/env python3

import rclpy
from rclpy.node import Node


class HMIBediening(Node):
    def __init__(self):
        super().__init__('hmi_bediening')
        self.get_logger().info('hmi_bediening node gestart')


def main():
    rclpy.init()
    node = HMIBediening()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()