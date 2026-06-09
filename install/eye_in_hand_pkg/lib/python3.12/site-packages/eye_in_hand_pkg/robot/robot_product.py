#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32


class RobotProduct(Node):
    def __init__(self):
        super().__init__('robot_product')

        self.sorted_box_publisher = self.create_publisher(
            Int32,
            '/sorted_box',
            10
        )

        self.get_logger().info('robot_product node gestart')

    def publish_sorted_box(self, box_number):
        msg = Int32()
        msg.data = box_number

        self.sorted_box_publisher.publish(msg)

        self.get_logger().info(f'Gesorteerd product gepubliceerd naar bak {box_number}')


def main():
    rclpy.init()

    node = RobotProduct()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()