#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from std_srvs.srv import Trigger, SetBool
from std_msgs.msg import String


class RobotBediening(Node):
    def __init__(self):
        super().__init__('robot_bediening')

        self.robot_running = False
        self.training_mode = False
        self.speed_percentage = 100

        self.start_service = self.create_service(
            Trigger,
            '/start_robot',
            self.start_robot_callback
        )

        self.stop_service = self.create_service(
            Trigger,
            '/stop_robot',
            self.stop_robot_callback
        )

        self.reset_service = self.create_service(
            Trigger,
            '/reset_robot',
            self.reset_robot_callback
        )

        self.training_service = self.create_service(
            SetBool,
            '/set_training_mode',
            self.set_training_mode_callback
        )

        self.status_publisher = self.create_publisher(
            String,
            '/robot_status',
            10
        )

        self.get_logger().info('robot_bediening node gestart')
        self.publish_status('Stand-by')

    def publish_status(self, status_text):
        msg = String()
        msg.data = status_text
        self.status_publisher.publish(msg)
        self.get_logger().info(f'Robot status gepubliceerd: {status_text}')

    def start_robot_callback(self, request, response):
        self.get_logger().info('Start robot service ontvangen')

        self.robot_running = True

        # Hier komt later jouw echte robot-startlogica.
        # Bijvoorbeeld:
        # - robotprogramma starten
        # - trajectory controller activeren
        # - robot naar home positie sturen
        # - sorteercyclus starten

        if self.training_mode:
            self.speed_percentage = 20
            self.publish_status('Training')
            response.message = 'Robot gestart in trainingsmodus op 20% snelheid'
        else:
            self.speed_percentage = 100
            self.publish_status('Running')
            response.message = 'Robot gestart op normale snelheid'

        response.success = True
        return response

    def stop_robot_callback(self, request, response):
        self.get_logger().info('Stop robot service ontvangen')

        self.robot_running = False

        # Hier komt later jouw echte robot-stoplogica.
        # Bijvoorbeeld:
        # - beweging stoppen
        # - programma pauzeren
        # - robot veilig naar stand-by zetten

        self.publish_status('Stand-by')

        response.success = True
        response.message = 'Robot gestopt'
        return response

    def reset_robot_callback(self, request, response):
        self.get_logger().info('Reset robot service ontvangen')

        self.robot_running = False
        self.training_mode = False
        self.speed_percentage = 100

        # Hier komt later jouw echte robot-resetlogica.
        # Bijvoorbeeld:
        # - foutstatus wissen
        # - robot naar beginpositie
        # - interne tellers resetten
        # - controllers opnieuw klaarzetten

        self.publish_status('Reset')

        response.success = True
        response.message = 'Robot gereset'
        return response

    def set_training_mode_callback(self, request, response):
        self.training_mode = request.data

        if self.training_mode:
            self.speed_percentage = 20

            # Hier komt later de echte snelheidsaanpassing.
            # Voor nu slaan we alleen de gewenste snelheid op.
            #
            # Mogelijke echte implementaties:
            # - MoveIt velocity scaling factor op 0.2 zetten
            # - trajectory snelheden vermenigvuldigen met 0.2
            # - UR speed slider / dashboard interface gebruiken
            # - jouw eigen robot-control node laten luisteren naar deze waarde

            self.publish_status('Training')

            response.success = True
            response.message = 'Trainingsmodus AAN: snelheid ingesteld op 20%'

            self.get_logger().info(response.message)

        else:
            self.speed_percentage = 100

            if self.robot_running:
                self.publish_status('Running')
            else:
                self.publish_status('Stand-by')

            response.success = True
            response.message = 'Trainingsmodus UIT: snelheid ingesteld op 100%'

            self.get_logger().info(response.message)

        return response


def main():
    rclpy.init()

    node = RobotBediening()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()