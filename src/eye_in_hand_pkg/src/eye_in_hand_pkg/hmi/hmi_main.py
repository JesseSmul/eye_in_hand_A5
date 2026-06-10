#!/usr/bin/env python3

import sys
import os
import cv2

import rclpy
from rclpy.executors import SingleThreadedExecutor

from PyQt5 import uic
from PyQt5.QtWidgets import QApplication, QWidget
from PyQt5.QtCore import QTimer, Qt
from PyQt5.QtGui import QImage, QPixmap

from eye_in_hand_pkg.hmi.hmi_status import HMIStatus
from eye_in_hand_pkg.hmi.hmi_bediening import HMIBediening
from eye_in_hand_pkg.hmi.hmi_product import HMIProduct
from eye_in_hand_pkg.hmi.hmi_camera import HMICamera
from eye_in_hand_pkg.hmi.hmi_calibratie import HMICalibratie


class HMIWindow(QWidget):
    def __init__(
        self,
        status_node,
        bediening_node,
        product_node,
        camera_node,
        calibratie_node,
        executor
    ):
        super().__init__()

        self.status_node = status_node
        self.bediening_node = bediening_node
        self.product_node = product_node
        self.camera_node = camera_node
        self.calibratie_node = calibratie_node
        self.executor = executor

        ui_file = os.path.join(
            os.path.dirname(__file__),
            'hmi_window.ui'
        )

        uic.loadUi(ui_file, self)

        self.startButton.clicked.connect(self.start_robot_clicked)
        self.stopButton.clicked.connect(self.bediening_node.stop_robot)
        self.resetButton.clicked.connect(self.bediening_node.reset_robot)
        self.respButton.clicked.connect(self.reset_product_counts)
        self.calButton.clicked.connect(self.calibratie_node.calibrate)

        self.trainingButton.setCheckable(True)
        self.trainingButton.setText("Training UIT")
        self.trainingButton.toggled.connect(self.training_mode_changed)

        self.set_lamp_color("gray")
        self.set_training_lamp_color("gray")
        self.set_status_text_design("Starting up")
        self.update_message_display()

        self.update_product_display()
        self.update_calibratie_display()

        self.cameraLabel.setText("Wachten op camerabeeld...")
        self.cameraLabel.setAlignment(Qt.AlignCenter)

        self.ros_timer = QTimer()
        self.ros_timer.timeout.connect(self.update_ros)
        self.ros_timer.start(50)

    def update_ros(self):
        self.executor.spin_once(timeout_sec=0)
        self.update_status_display()
        self.update_product_display()
        self.update_camera_display()
        self.update_calibratie_display()
        self.update_message_display()

# ----------------------------------------------------------------------
# Start robot action

    def start_robot_clicked(self):
        training_enabled = self.trainingButton.isChecked()
        self.bediening_node.start_robot(training_enabled)
        self.update_message_display()

# ----------------------------------------------------------------------
# Feedback/resultaat van action en services tonen in msgLabel

    def update_message_display(self, background="#FFFFFF", text_color="black"):
        if hasattr(self, "msgLabel"):
            self.msgLabel.setText(self.bediening_node.get_latest_message())
            self.set_msg_label_design(self.msgLabel.text(), background, text_color)
# ----------------------------------------------------------------------
# Training mode toggle past de training mode aan in de HMI

    def training_mode_changed(self, checked):
        self.bediening_node.set_training_mode(checked)

        if checked:
            self.trainingButton.setText("Training AAN")
            self.set_training_lamp_color("purple")
            self.set_status_text_design("Training mode")
        else:
            self.trainingButton.setText("Training UIT")
            self.set_training_lamp_color("gray")
            self.set_status_text_design("Training uit")

# ----------------------------------------------------------------------
# Status display update past de kleur van de status-lamp en de tekst aan op basis van de laatste status die is ontvangen van de status_node.

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

        elif status == "Warning":
            self.set_lamp_color("orange")
            self.set_status_text_design(f"Warning: {status}")

        elif status == "Training":
            self.set_lamp_color("purple")
            self.set_status_text_design("Training mode")

        elif status == "Stand-by":
            self.set_lamp_color("yellow")
            self.set_status_text_design("Stand-by")

        else:
            self.set_lamp_color("gray")
            self.set_status_text_design(status)

# ----------------------------------------------------------------------
# Camera display update zet het laatste camerabeeld om naar een QPixmap en toont het in de cameraLabel.

    def update_camera_display(self):
        frame = self.camera_node.get_latest_frame()

        if frame is None:
            return

        try:
            rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

            height, width, channels = rgb_frame.shape
            bytes_per_line = channels * width

            qt_image = QImage(
                rgb_frame.data,
                width,
                height,
                bytes_per_line,
                QImage.Format_RGB888
            ).copy()

            pixmap = QPixmap.fromImage(qt_image)

            pixmap = pixmap.scaled(
                self.cameraLabel.width(),
                self.cameraLabel.height(),
                Qt.KeepAspectRatio,
                Qt.SmoothTransformation
            )

            self.cameraLabel.setPixmap(pixmap)

        except Exception as e:
            self.cameraLabel.setText(f"Camera fout: {e}")

# ----------------------------------------------------------------------
# Calibratie display update haalt de laatste robot- en camera-positie op van de calibratie_node en toont deze in de respectievelijke labels.

    def update_calibratie_display(self):
        self.set_label_design(
            self.xyzrobotLabel,
            self.calibratie_node.get_robot_xyz_text()
        )

        self.set_label_design(
            self.xyzcamLabel,
            self.calibratie_node.get_camera_xyz_text()
        )

# ----------------------------------------------------------------------
# Zet de style van de status- en training-lampen

    def set_lamp_color(self, color):
        self.statusLamp.setStyleSheet(f"""
            QLabel {{
                background-color: {color};
                border-radius: 20px;
                border: 1px solid black;
            }}
        """)

    def set_training_lamp_color(self, color):
        self.trainingLamp.setStyleSheet(f"""
            QLabel {{
                background-color: {color};
                border-radius: 20px;
                border: 1px solid black;
            }}
        """)

# ----------------------------------------------------------------------
# Algemene functie om de stijl van labels aan te passen, gebruikt voor status- en productlabels

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

    def set_msg_label_design(self, text, background="#FFFFFF", text_color="black"):
        self.set_label_design(
            self.msgLabel,
            text,
            background,
            text_color
        )


# ----------------------------------------------------------------------
# Update product display haalt het aantal gesorteerde producten per bak op van de product_node en toont deze in de valueBox-labels.

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
    camera_node = HMICamera()
    calibratie_node = HMICalibratie()

    executor = SingleThreadedExecutor()
    executor.add_node(status_node)
    executor.add_node(bediening_node)
    executor.add_node(product_node)
    executor.add_node(camera_node)
    executor.add_node(calibratie_node)

    app = QApplication(sys.argv)

    window = HMIWindow(
        status_node,
        bediening_node,
        product_node,
        camera_node,
        calibratie_node,
        executor
    )

    window.show()

    exit_code = app.exec_()

    executor.remove_node(status_node)
    executor.remove_node(bediening_node)
    executor.remove_node(product_node)
    executor.remove_node(camera_node)
    executor.remove_node(calibratie_node)

    status_node.destroy_node()
    bediening_node.destroy_node()
    product_node.destroy_node()
    camera_node.destroy_node()
    calibratie_node.destroy_node()

    rclpy.shutdown()
    sys.exit(exit_code)


if __name__ == '__main__':
    main()