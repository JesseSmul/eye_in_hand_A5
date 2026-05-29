#!/usr/bin/env python3

import rclpy
from rclpy.node import Node


class HMIProduct(Node):
    def __init__(self):
        super().__init__('hmi_product')
        self.get_logger().info('hmi_product node gestart')


def main():
    rclpy.init()
    node = HMIProduct()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()