#!/usr/bin/env python3

import cv2
import numpy as np

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge


class TestCameraPublisher(Node):
    def __init__(self):
        super().__init__('test_camera_publisher')

        self.publisher = self.create_publisher(Image, '/beeld_camera', 10)
        self.bridge = CvBridge()

        self.counter = 0

        self.timer = self.create_timer(0.1, self.publish_image)

        self.get_logger().info('Test camera publisher gestart op /beeld_camera')

    def publish_image(self):
        image = np.zeros((480, 640, 3), dtype=np.uint8)

        x = 50 + (self.counter % 500)

        cv2.rectangle(image, (x, 180), (x + 80, 260), (0, 255, 0), -1)
        cv2.putText(
            image,
            f"Test camera frame {self.counter}",
            (40, 80),
            cv2.FONT_HERSHEY_SIMPLEX,
            1,
            (255, 255, 255),
            2
        )

        msg = self.bridge.cv2_to_imgmsg(image, encoding='bgr8')
        self.publisher.publish(msg)

        self.counter += 1


def main():
    rclpy.init()
    node = TestCameraPublisher()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
