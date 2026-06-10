#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

from my_interfaces.msg import DetectedObject
from my_interfaces.msg import SortTask


class RobotProduct(Node):

    def __init__(self):
        super().__init__('robot_product')

        self.object_subscriber = self.create_subscription(
            DetectedObject,
            '/detected_object',
            self.object_callback,
            10
        )

       
        self.sorted_box_publisher = self.create_publisher(
            Int32,
            '/sorted_box',
            10
        )

        self.sort_task_publisher = self.create_publisher(
            SortTask,
            '/sort_task',
            10
        )


        # Sorteer bak definities 
        self.box_locations = {
            "schroevendraaier": 1,
            "pijpsleutel":     2,
            "kniptang":        3,
            "steeksleutel":    4
        }

        # Posities van de bakken:
        self.box_positions = {
            1: (0.5, 0.0, 0.0),  # Bak 1 positie
            2: (0.5, 0.5, 0.0),  # Bak 2 positie
            3: (0.5, -0.5, 0.0), # Bak 3 positie
            4: (0.5, 1.0, 0.0)   # Bak 4 positie
        }

        self.get_logger().info("robot_product node gestart")


    def publish_sorted_box(self, box_number):
        msg = Int32()
        msg.data = box_number

        self.sorted_box_publisher.publish(msg)

        self.get_logger().info(f'Gesorteerd product gepubliceerd naar bak {box_number}')

    def object_callback(self, msg):

        object_name = msg.object_name

        if object_name not in self.box_locations:
            self.get_logger().warn(
                f'Onbekend object: {object_name}'
            )
            return

        box_number = self.box_locations[object_name]
        self.publish_sorted_box(box_number)

        place_x, place_y, place_z = self.box_positions[box_number]

        task = SortTask()

        # Pick positie vanuit camera
        task.object_name = object_name
        task.pick_x = msg.x
        task.pick_y = msg.y
        task.pick_z = 0.0
        task.pick_angle = msg.angle

        # Place positie vanuit vaste bakken
        task.place_x = place_x
        task.place_y = place_y
        task.place_z = place_z

        self.sort_task_publisher.publish(task)

        self.get_logger().info(
            f'{object_name} gedetecteerd -> sorteren naar bak {box_number}'
        )


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