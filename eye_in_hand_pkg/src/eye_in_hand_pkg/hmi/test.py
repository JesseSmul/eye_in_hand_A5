#!/usr/bin/env python3

import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from std_srvs.srv import Trigger, SetBool
from std_msgs.msg import String

from eye_in_hand_interfaces.action import StartRobot


class RobotTest(Node):
    def __init__(self):
        super().__init__('robot_test')

        self.training_mode = False
        self.robot_running = False

        self.status_publisher = self.create_publisher(
            String,
            '/robot_status',
            10
        )

        self.start_action_server = ActionServer(
            self,
            StartRobot,
            '/start_robot',
            self.start_execute_callback
        )

        self.create_service(Trigger, '/stop_robot', self.stop_callback)
        self.create_service(Trigger, '/reset_robot', self.reset_callback)
        self.create_service(SetBool, '/set_training_mode', self.training_callback)

        self.get_logger().info("Robot test node gestart")

        self.publish_status("Robot ready")

    def publish_status(self, status):
        msg = String()
        msg.data = status
        self.status_publisher.publish(msg)
        self.get_logger().info(f"Status gepubliceerd: {status}")

    def start_execute_callback(self, goal_handle):
        self.get_logger().info("Start action ontvangen")

        feedback_msg = StartRobot.Feedback()

        if goal_handle.request.training_mode:
            self.training_mode = True
            feedback_msg.feedback = "Training mode actief: snelheid 20%"
            self.publish_status("Training")
        else:
            feedback_msg.feedback = "Normale modus: snelheid 100%"
            self.publish_status("Running")

        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1.0)

        feedback_msg.feedback = "Robot initialiseren..."
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1.0)

        feedback_msg.feedback = "Controllers controleren..."
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1.0)

        feedback_msg.feedback = "Robot gestart"
        goal_handle.publish_feedback(feedback_msg)

        self.robot_running = True

        goal_handle.succeed()

        result = StartRobot.Result()
        result.success = True
        result.message = "Robot succesvol gestart"

        return result

    def stop_callback(self, request, response):
        self.robot_running = False

        self.publish_status("Stand-by")

        response.success = True
        response.message = "Robot gestopt"
        return response

    def reset_callback(self, request, response):
        self.robot_running = False
        self.training_mode = False

        self.publish_status("Robot ready")

        response.success = True
        response.message = "Robot gereset"
        return response

    def training_callback(self, request, response):
        self.training_mode = request.data

        if self.training_mode:
            self.publish_status("Training")
            response.success = True
            response.message = "Training mode AAN: snelheid 20%"
        else:
            if self.robot_running:
                self.publish_status("Running")
            else:
                self.publish_status("Stand-by")

            response.success = True
            response.message = "Training mode UIT: snelheid 100%"

        return response


def main():
    rclpy.init()

    node = RobotTest()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()