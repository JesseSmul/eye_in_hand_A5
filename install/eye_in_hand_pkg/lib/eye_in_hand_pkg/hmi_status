#!/usr/bin/env python3
import sys
import os

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

from PyQt5 import uic
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer

class HMINode(Node):
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


class HMIWindow(QWidget):
    def __init__(self, ros_node):
        super().__init__()

        self.ros_node = ros_node

        ui_file = os.path.join(
            os.path.dirname(__file__),
            'hmi_window.ui'
        )

        uic.loadUi(ui_file, self)

        self.colors = [
            ("green", "Running"),
            ("blue", "Reset"),
            ("red", "Error"),
            ("orange", "Stand-by"),
            ("purple", "Robot ready"),
            ("gray", "Unknown"),
        ]

        self.ros_timer = QTimer()
        self.ros_timer.timeout.connect(self.update_ros)
        self.ros_timer.start(50)

    def update_ros(self):
        rclpy.spin_once(self.ros_node, timeout_sec=0)
        self.update_status_display()

    def update_status_display(self):
        status = self.ros_node.latest_status

        if status == "Running":
            self.set_lamp_color("green")
            self.set_status_text_design("Running", "#FFFFFF", "black")
        elif status == "Reset":
            self.set_lamp_color("blue")
            self.set_status_text_design("Reset", "#FFFFFF", "black")
        elif status == "Error":
            self.set_lamp_color("red")
            self.set_status_text_design("Error", "#FFFFFF", "black")
        elif status == "Stand-by":
            self.set_lamp_color("orange")
            self.set_status_text_design("Stand-by", "#FFFFFF", "black")
        elif status == "Robot ready":
            self.set_lamp_color("purple")
            self.set_status_text_design("Robot ready", "#FFFFFF", "black")
        else:
            self.set_lamp_color("gray")
            self.set_status_text_design(status, "#FFFFFF", "black")

    def set_lamp_color(self, color):
        self.statusLamp.setStyleSheet(f"""
            QLabel {{
                background-color: {color};
                border-radius: 20px;
                border: 1px solid black;
            }}
        """)

    def set_status_text_design(self, text, background="#FFFFFF", text_color="black"):
        self.statusText.setText(text)
        self.statusText.setStyleSheet(f"""
            QLabel {{
                background-color: {background};
                color: {text_color};
                border: 1px solid #444444;
                border-radius: 4px;
                padding: 6px;
                font-size: 15px;
                font-weight: normal;
                }}
        """)

def main():
    rclpy.init()

    ros_node = HMINode()

    app = QApplication(sys.argv)
    window = HMIWindow(ros_node)
    window.show()

    exit_code = app.exec_()

    ros_node.destroy_node()
    rclpy.shutdown()

    sys.exit(exit_code)


if __name__ == '__main__':
    main()