#!/usr/bin/env python3

from urllib import response

import rclpy
from rclpy.node import Node

from std_srvs.srv import Trigger, SetBool
from std_msgs.msg import String
from my_moveit_python import srdfGroupStates
from my_moveit_python import MovegroupHelper


class RobotBediening(Node):
    def __init__(self):
        super().__init__('robot_bediening')

        self.robot_running = False

        self.status_publisher = self.create_publisher(
            String,
            '/robot_status',
            10
        )
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
        
        self.command_publisher = self.create_publisher(
            String,
            '/robot_command',
            10
        )

        self.get_logger().info('robot_bediening node gestart')
        self.publish_status('Stand-by')

        self.movegroup = MovegroupHelper(
            node=self,
            base_frame='base_link',
            end_effector_frame='tool0'
        )

    def publish_status(self, status_text):
        msg = String()
        msg.data = status_text
        self.status_publisher.publish(msg)
        self.get_logger().info(f'Robot status gepubliceerd: {status_text}')

    def start_robot_callback(self, request, response):
        self.get_logger().info('Start robot service ontvangen')
         
        # Hier komt later jouw echte robot-startlogica.
        # Bijvoorbeeld:
        # - robotprogramma starten
        # - trajectory controller activeren
        # - robot naar home positie sturen
        # - sorteercyclus starten
        
        if self.robot_running:
            response.success = False
            response.message = 'Robot draait al'
            return response

        self.robot_running = True

        # Robot naar home positie sturen
        self.move_to_state("home")

        # Sorteerproces starten
        start_msg = String()
        start_msg.data = "start"
        self.command_publisher.publish(start_msg)

        if self.training_mode:
            self.speed_percentage = 20
            self.publish_status('Training')
            response.message = 'Robot gestart in trainingsmodus'
        else:
            self.speed_percentage = 100
            self.publish_status('Running')
            response.message = 'Robot gestart'

        response.success = True
        return response
    
   
    
    def stop_robot_callback(self, request, response):
        self.get_logger().info('Stop robot service ontvangen')

        # Hier komt later jouw echte robot-stoplogica.
        # Bijvoorbeeld:
        # - beweging stoppen
        # - programma pauzeren
        # - robot veilig naar stand-by zetten

        self.robot_running = False

        stop_msg = String()
        
        stop_msg.data = "stop"
        self.command_publisher.publish(stop_msg)

        self.cancel_current_motion()

        self.publish_status('Stand-by')

        response.success = True
        response.message = 'Robot gestopt'

        return response

    def cancel_current_motion(self):
        self.get_logger().info("Huidige beweging annuleren")

    def reset_robot_callback(self, request, response):
        self.get_logger().info('Reset robot service ontvangen')

        # Hier komt later jouw echte robot-resetlogica.
        # Bijvoorbeeld:
        # - foutstatus wissen
        # - robot naar beginpositie
        # - interne tellers resetten
        # - controllers opnieuw klaarzetten

        self.robot_running = False
        self.cancel_current_motion()
        self.training_mode = False
        self.speed_percentage = 100

        self.move_to_state("home")

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

    def move_to_state(self, state_name):
        try:
            self.get_logger().info(f'Beweeg naar state: {state_name}')

            goal = srdfGroupStates()
            goal.group_name = "ur_manipulator"
            goal.state_name = state_name

            self.movegroup.move_to_state(goal)

            return True

        except Exception as e:
            self.get_logger().error(str(e))
            return False
    
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