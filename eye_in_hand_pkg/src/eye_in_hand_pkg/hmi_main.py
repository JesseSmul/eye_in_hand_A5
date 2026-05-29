#!/usr/bin/env python3

import sys
import os

import rclpy
from rclpy.executors import SingleThreadedExecutor

from PyQt5 import uic
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer

from eye_in_hand_pkg.hmi_status import HMIStatus
from eye_in_hand_pkg.hmi_bediening import HMIBediening


class HMIWindow(QWidget):
    def __init__(self, status_node, bediening_node, executor):
        super().__init__()

        self.status_node = status_node
        self.bediening_node = bediening_node
        self.executor = executor

        ui_file = os.path.join(
            os.path.dirname(__file__),
            'hmi_window.ui'
        )

        uic.loadUi(ui_file, self)

        self.startButton.clicked.connect(self.bediening_node.start_robot)
        self.stopButton.clicked.connect(self.bediening_node.stop_robot)
        self.resetButton.clicked.connect(self.bediening_node.reset_robot)

        self.set_lamp_color("gray")
        self.set_status_text_design("Starting up", "#FFFFFF", "black")

        self.ros_timer = QTimer()
        self.ros_timer.timeout.connect(self.update_ros)
        self.ros_timer.start(50)

    def update_ros(self):
        self.executor.spin_once(timeout_sec=0)
        self.update_status_display()

    def update_status_display(self):
        status = self.status_node.latest_status

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

    status_node = HMIStatus()
    bediening_node = HMIBediening()

    executor = SingleThreadedExecutor()
    executor.add_node(status_node)
    executor.add_node(bediening_node)

    app = QApplication(sys.argv)
    window = HMIWindow(status_node, bediening_node, executor)
    window.show()

    exit_code = app.exec_()

    executor.remove_node(status_node)
    executor.remove_node(bediening_node)

    status_node.destroy_node()
    bediening_node.destroy_node()

    rclpy.shutdown()
    sys.exit(exit_code)


if __name__ == '__main__':
    main()