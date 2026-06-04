from rclpy.node import Node
from std_msgs.msg import Int32


class HMIProduct(Node):
    def __init__(self):
        super().__init__('hmi_product')

#----------------------------------------------------------------------
# Subscriber van de sorted_box topic, houdt het aantal gesorteerde producten per bak bij

        self.box_counts = {
            1: 0,
            2: 0,
            3: 0,
            4: 0,
        }

        self.sorted_box_subscriber = self.create_subscription(
            Int32,
            '/sorted_box',
            self.sorted_box_callback,
            10
        )

        self.get_logger().info('hmi_product node gestart')

    def sorted_box_callback(self, msg):
        box_number = msg.data

        if box_number in self.box_counts:
            self.box_counts[box_number] += 1
            self.get_logger().info(
                f'Product toegevoegd aan bak {box_number}. Aantal: {self.box_counts[box_number]}'
            )
        else:
            self.get_logger().warn(
                f'Ongeldige bak ontvangen: {box_number}'
            )

    def reset_counts(self):
        self.box_counts[1] = 0
        self.box_counts[2] = 0
        self.box_counts[3] = 0
        self.box_counts[4] = 0

        self.get_logger().info('Product counters gereset')

    def get_box_count(self, box_number):
        return self.box_counts.get(box_number, 0)