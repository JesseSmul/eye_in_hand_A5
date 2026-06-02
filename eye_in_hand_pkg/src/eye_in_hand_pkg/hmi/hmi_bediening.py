from rclpy.node import Node
from std_srvs.srv import Trigger


class HMIBediening(Node):
    def __init__(self):
        super().__init__('hmi_bediening')
        
        self.start_client = self.create_client(Trigger, '/start_robot')
        self.stop_client = self.create_client(Trigger, '/stop_robot')
        self.reset_client = self.create_client(Trigger, '/reset_robot')
        
        self.get_logger().info('hmi_bediening node gestart')


    def call_service(self, client, name):
        if not client.wait_for_service(timeout_sec=0.5):
            self.get_logger().error(f'Service {name} niet beschikbaar')
            return

        request = Trigger.Request()
        future = client.call_async(request)
        future.add_done_callback(lambda f: self.response_callback(f, name))

    def response_callback(self, future, name):
        try:
            response = future.result()
            self.get_logger().info(
                f"{name}: success={response.success}, message={response.message}"
            )
        except Exception as e:
            self.get_logger().error(f"Fout bij {name}: {e}")

    def start_robot(self):
        self.call_service(self.start_client, '/start_robot')

    def stop_robot(self):
        self.call_service(self.stop_client, '/stop_robot')

    def reset_robot(self):
        self.call_service(self.reset_client, '/reset_robot')