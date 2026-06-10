from rclpy.node import Node
from rclpy.action import ActionClient

from std_srvs.srv import Trigger, SetBool
from eye_in_hand_interfaces.action import StartRobot


class HMIBediening(Node):
    def __init__(self):
        super().__init__('hmi_bediening')

        # ----------------------------------------------------------------------
        # Action client voor start robot

        self.start_action_client = ActionClient(
            self,
            StartRobot,
            '/start_robot'
        )

        # ----------------------------------------------------------------------
        # Clients voor de bediening services

        self.stop_client = self.create_client(Trigger, '/stop_robot')
        self.reset_client = self.create_client(Trigger, '/reset_robot')
        self.training_client = self.create_client(SetBool, '/set_training_mode')

        self.latest_message = "HMI bediening gestart"

        self.get_logger().info('hmi_bediening node gestart')

    # ----------------------------------------------------------------------
    # Services aanroepen

    def call_service(self, client, name):
        if not client.wait_for_service(timeout_sec=0.5):
            self.latest_message = f'Service {name} niet beschikbaar'
            self.get_logger().error(self.latest_message)
            return

        request = Trigger.Request()
        future = client.call_async(request)
        future.add_done_callback(lambda f: self.response_callback(f, name))

    def call_bool_service(self, client, name, value):
        if not client.wait_for_service(timeout_sec=0.5):
            self.latest_message = f'Service {name} niet beschikbaar'
            self.get_logger().error(self.latest_message)
            return

        request = SetBool.Request()
        request.data = value

        future = client.call_async(request)
        future.add_done_callback(lambda f: self.response_callback(f, name))

    def response_callback(self, future, name):
        try:
            response = future.result()
            self.latest_message = response.message

            self.get_logger().info(
                f"{name}: success={response.success}, message={response.message}"
            )

        except Exception as e:
            self.latest_message = f"Fout bij {name}: {e}"
            self.get_logger().error(self.latest_message)

    # ----------------------------------------------------------------------
    # Start robot action

    def start_robot(self, training_mode=False):
        if not self.start_action_client.wait_for_server(timeout_sec=0.5):
            self.latest_message = "Action /start_robot niet beschikbaar"
            self.get_logger().error(self.latest_message)
            return

        goal_msg = StartRobot.Goal()
        goal_msg.training_mode = training_mode

        self.latest_message = "Start robot aangevraagd..."
        self.get_logger().info(self.latest_message)

        send_goal_future = self.start_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.start_feedback_callback
        )

        send_goal_future.add_done_callback(self.start_goal_response_callback)

    def start_goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.latest_message = "Start robot geweigerd"
            self.get_logger().error(self.latest_message)
            return

        self.latest_message = "Start robot geaccepteerd"
        self.get_logger().info(self.latest_message)

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.start_result_callback)

    def start_feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback.feedback
        self.latest_message = feedback

        self.get_logger().info(f"Start feedback: {feedback}")

    def start_result_callback(self, future):
        result = future.result().result
        self.latest_message = result.message

        self.get_logger().info(
            f"Start result: success={result.success}, message={result.message}"
        )

    # ----------------------------------------------------------------------
    # Functies voor knoppen in HMI

    def stop_robot(self):
        self.call_service(self.stop_client, '/stop_robot')

    def reset_robot(self):
        self.call_service(self.reset_client, '/reset_robot')

    def set_training_mode(self, enabled):
        self.call_bool_service(
            self.training_client,
            '/set_training_mode',
            enabled
        )

    def get_latest_message(self):
        return self.latest_message