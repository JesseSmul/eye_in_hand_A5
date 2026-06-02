#!/usr/bin/env python3

import sys
import os

import rclpy
from rclpy.executors import SingleThreadedExecutor

from PyQt5 import uic
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer

from eye_in_hand_pkg.hmi.hmi_status import HMIStatus
from eye_in_hand_pkg.hmi.hmi_bediening import HMIBediening
from eye_in_hand_pkg.hmi.hmi_product import HMIProduct


class HMIWindow(QWidget):
    def __init__(self, status_node, bediening_node, product_node, executor):
        super().__init__()

        self.status_node = status_node
        self.bediening_node = bediening_node
        self.product_node = product_node
        self.executor = executor

        ui_file = os.path.join(
            os.path.dirname(__file__),
            'hmi_window.ui'
        )

        uic.loadUi(ui_file, self)

        self.startButton.clicked.connect(self.bediening_node.start_robot)
        self.stopButton.clicked.connect(self.bediening_node.stop_robot)
        self.resetButton.clicked.connect(self.bediening_node.reset_robot)
        self.respButton.clicked.connect(self.reset_product_counts)

        self.set_lamp_color("gray")

        self.set_status_text_design("Starting up")
        self.update_product_display()

        self.ros_timer = QTimer()
        self.ros_timer.timeout.connect(self.update_ros)
        self.ros_timer.start(50)

    def update_ros(self):
        self.executor.spin_once(timeout_sec=0)
        self.update_status_display()
        self.update_product_display()

    def update_status_display(self):
        status = self.status_node.latest_status

        if status == "Running":
            self.set_lamp_color("green")
            self.set_status_text_design("Running")

        elif status == "Reset":
            self.set_lamp_color("blue")
            self.set_status_text_design("Reset")

        elif status == "Error":
            self.set_lamp_color("red")
            self.set_status_text_design("Error")

        elif status == "Stand-by":
            self.set_lamp_color("orange")
            self.set_status_text_design("Stand-by")

        elif status == "Robot ready":
            self.set_lamp_color("purple")
            self.set_status_text_design("Robot ready")

        else:
            self.set_lamp_color("gray")
            self.set_status_text_design(status)

    def set_lamp_color(self, color):
        self.statusLamp.setStyleSheet(f"""
            QLabel {{
                background-color: {color};
                border-radius: 20px;
                border: 1px solid black;
            }}
        """)

    def set_label_design(self, label, text, background="#FFFFFF", text_color="black"):
        label.setText(text)
        label.setStyleSheet(f"""
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

    def set_status_text_design(self, text, background="#FFFFFF", text_color="black"):
        self.set_label_design(
            self.statusText,
            text,
            background,
            text_color
        )

    def update_product_display(self):
        self.set_label_design(
            self.valueBox1,
            f"Bak 1: {self.product_node.get_box_count(1)}"
        )

        self.set_label_design(
            self.valueBox2,
            f"Bak 2: {self.product_node.get_box_count(2)}"
        )

        self.set_label_design(
            self.valueBox3,
            f"Bak 3: {self.product_node.get_box_count(3)}"
        )

        self.set_label_design(
            self.valueBox4,
            f"Bak 4: {self.product_node.get_box_count(4)}"
        )

    def reset_product_counts(self):
        self.product_node.reset_counts()
        self.update_product_display()


def main():
    rclpy.init()

    status_node = HMIStatus()
    bediening_node = HMIBediening()
    product_node = HMIProduct()

    executor = SingleThreadedExecutor()
    executor.add_node(status_node)
    executor.add_node(bediening_node)
    executor.add_node(product_node)

    app = QApplication(sys.argv)
    window = HMIWindow(status_node, bediening_node, product_node, executor)
    window.show()

    exit_code = app.exec_()

    executor.remove_node(status_node)
    executor.remove_node(bediening_node)
    executor.remove_node(product_node)

    status_node.destroy_node()
    bediening_node.destroy_node()
    product_node.destroy_node()

    rclpy.shutdown()
    sys.exit(exit_code)


if __name__ == '__main__':
    main()