#!/user/bin/env3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from my_cobot_interfaces.srv import SetJointAngles, GetBlocks, PumpOn, PumpOff
from my_cobot_interfaces.action import SetAngles

from scipy.spatial.transform import Rotation
from .locations import *
from .inverse_kinematics import inverse_kinematics, z_invariant_inverse_kinematics


import time


class StateMachine(Node):
    def __init__(self):
        super().__init__("Mover")
        self.robot = RobotClient()
        self.state = State()
        self.target = Target(120, 80, 40, 0)
        self.blocks_client = self.create_client(GetBlocks, "/get_blocks")
        self.armCameraAngle = 0
        while True:
            self.transitionToZone(Zone.WATCHING)
            self.watch()
            self.transitionToZone(Zone.CAMERA)
            self.pickup()
            self.transitionToZone(Zone.BIN_A2)
            self.putdown()

    def watch(self):
        blocks = []
        while not blocks:
            future = self.blocks_client.call_async(GetBlocks.Request())
            rclpy.spin_until_future_complete(self, future)
            blocks = future.result().blocks
            time.sleep(1)

        block = blocks[0]
        for b in blocks:
            if b.z > block.z:
                block = b
        self.target = Target(block.x, block.y, block.z, block.theta)
        print(block.x, block.y, block.z, block.theta)

    def pickup(self):
        self.lowerToTarget()
        self.setPump(Pump.ON)
        self.raiseToTransition()

    def putdown(self):
        self.lowerToTarget()
        self.setPump(Pump.OFF)
        self.raiseToTransition()

    def transitionToZone(self, zone:Zone):
        if not self.state.canMoveToZone(zone):
            raise ValueError("Cannot move from " + str(self.state.zone) + " to " + str(zone))
        self.state.zone = zone
        x, y, z, theta = Location.get_coords(self.state, self.target)
        if theta is None:
            self.armCamAngle = self.robot.move_to_z_invariant(x, y, z)
            return
        self.robot.move_to_z_rot(x, y, z, theta)

    def lowerToTarget(self):
        self.moveToHeight(Height.FULL)
        self.moveToHeight(Height.LOWERED)
        self.moveToHeight(Height.ABOVE_TARGET)
        self.moveToHeight(Height.AT_TARGET)
        self.target.theta -= (self.armCameraAngle + 45) % 90 - 45

    def raiseToTransition(self):
        self.moveToHeight(Height.ABOVE_TARGET)
        self.moveToHeight(Height.LOWERED)
        self.moveToHeight(Height.FULL)
        self.moveToHeight(Height.TRANSITION)
        
    def moveToHeight(self, height:Height):
        if not self.state.canMoveToHeight(height):
            raise ValueError("Cannot move from " + str(self.state.height) + " to " + str(height))
        self.state.height = height
        x, y, z, theta = Location.get_coords(self.state, self.target)
        if theta is None:
            if height == Height.FULL or height == Height.LOWERED:
                self.armCamAngle = self.robot.move_to_z_invariant(x, y, z)
                return
            else:
                self.robot.move_to_z_rot(x, y, z, self.armCamAngle)
                return
        self.robot.move_to_z_rot(x, y, z, theta)

    def setPump(self, pump):
        if not self.state.canChangePumpTo(pump):
            raise ValueError("Cannot move from " + str(self.state.pump) + " to " + str(pump))
        if pump == Pump.ON:
            self.robot.pump_on()
        elif pump ==Pump.OFF:
            self.robot.pump_off()


class RobotClient(Node):
    def __init__(self):
        super().__init__("Robot_client")
        self.robot_service = ActionClient(self, SetAngles, "/set_angles")
        self.pump_on_service = self.create_client(PumpOn, "/pump_on")
        self.pump_off_service = self.create_client(PumpOff, "/pump_off")

    def move_to_z_rot(self, x:float, y:float, z:float, theta:float):
        self.move_to(x, y, z, Rotation.from_euler('xyz', [0, 0, theta]))

    def move_to(self, x:float, y: float, z: float, rot:Rotation):
        req = SetAngles.Goal()
        req.j1, req.j2, req.j3, req.j4, req.j5, req.j6 = inverse_kinematics(x, y, z, rot)
        self.call_robot(req)

    def move_to_z_invariant(self, x:float, y:float, z:float):
        req = SetAngles.Goal()
        [req.j1, req.j2, req.j3, req.j4, req.j5, req.j6], theta = z_invariant_inverse_kinematics(x, y, z)
        self.call_robot(req)
        return theta
        
    def call_robot(self, req:SetAngles.Goal):
        self.get_logger().info("Sending motion request")
        future = self.robot_service.send_goal_async(req)
        rclpy.spin_until_future_complete(self, future)
        if not future.result(): self.call_robot(req)
        goal_handle_future = future.result().get_result_async()
        rclpy.spin_until_future_complete(self, goal_handle_future)
        resp = goal_handle_future.result().result
        while resp.timeout:
            self.get_logger().error("Error encountered: freezing motion")
            pass

    def pump_on(self):
        future = self.pump_on_service.call_async(PumpOn.Request())
        rclpy.spin_until_future_complete(self, future)

    def pump_off(self):
        future = self.pump_off_service.call_async(PumpOff.Request())
        rclpy.spin_until_future_complete(self, future)

def main(args=None):
    rclpy.init(args=args)
    node = StateMachine()
    rclpy.spin(node)
    node.on_shutdown()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
