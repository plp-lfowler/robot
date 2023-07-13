#!/user/bin/env3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node

import cv2
import numpy as np
from my_cobot_interfaces.srv import GetBlocks
from my_cobot_interfaces.msg import Block as BlockMsg

class Block:
    def __init__(self, x, y, w, h, angle, color, i=0):
        self.ROBOT_X_AT_ORIGIN = 147
        self.ROBOT_Y_AT_ORIGIN = 15
        self.HORIZ_RES = 640
        self.VERT_RES = 480
        self.PERSPECTIVE_FACTOR = 14/120
        self.BOX_SIZE = 40
        x = x - (self.HORIZ_RES / 2)
        y = (self.VERT_RES / 2) - y
        theta = np.radians(angle)
        dw = self.PERSPECTIVE_FACTOR * (-x * np.cos(theta) + y * np.sin(theta))
        dh = self.PERSPECTIVE_FACTOR * (x * np.sin(theta) + y * np.cos(theta))
        self.x = x * (1 + (self.PERSPECTIVE_FACTOR / 2))
        self.y = y * (1 + (self.PERSPECTIVE_FACTOR / 2))
        self.w = w - np.abs(dw)
        self.h = h - np.abs(dh)
        self.angle = angle
        self.color = color


    def get_unitless_depth_point(self, x, y):
        DEPTH = 759.1
        z = DEPTH
        return np.array([x, y, z])

    
    def get_3D_point_cam(self):
        CAM_HEIGHT_BOXES = 9.4231
        pixel_size = (self.w + self.h) / 2
        scalingFactor = self.BOX_SIZE / pixel_size
        pixel_position = self.get_unitless_depth_point(self.x, self.y)
        point = pixel_position * scalingFactor
        point[2] = (CAM_HEIGHT_BOXES * self.BOX_SIZE)  - point[2]
        return point
    
    def get_3D_point(self):
        xCam, yCam, zCam = self.get_3D_point_cam()
        xRob = self.ROBOT_X_AT_ORIGIN - yCam
        yRob = self.ROBOT_Y_AT_ORIGIN + xCam
        zRob = round(zCam / self.BOX_SIZE) * self.BOX_SIZE
        return np.array([xRob, yRob, zRob])
    
    def drawOn(self, img):
        x = self.x + self.HORIZ_RES / 2
        y = self.VERT_RES / 2 - self.y

        box = cv2.boxPoints(((x, y), (self.w, self.h), self.angle))
        box = np.int0(box)
        cv2.drawContours(img, [box], 0, (0,0,0), 2)

        org1 = (int(x - 40), int(y-20))
        org2 = (int(x - 40), int(y))
        org3 = (int(x - 40), int(y + 20))
        point3d = self.get_3D_point()
        text1 = "(" + str(round(point3d[0], 1)) + ", " + str(round(point3d[1], 1)) + ", " + str(round(point3d[2], 1)) + ")"
        text2 = str(round(self.w)) + " x " + str(round(self.h))
        text3 = str(round(self.angle, 2))
        img = cv2.putText(img, text1, org1, cv2.FONT_HERSHEY_SIMPLEX, 0.3, (0, 0, 0), 1, cv2.LINE_AA)
        img = cv2.putText(img, text2, org2, cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 0), 1, cv2.LINE_AA)
        img = cv2.putText(img, text3, org3, cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 0), 1, cv2.LINE_AA)
        return img
    
    def getMsg(self):
        block = BlockMsg()
        block.x,block.y,block.z = self.get_3D_point()
        block.theta = self.angle
        block.color = self.color
        return block
        
    

class ComputerVision(Node):
    def __init__(self):
        super().__init__("Computer_Vision")
        self.vid = cv2.VideoCapture(0)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.service = self.create_service(GetBlocks, "/get_blocks", self.find_blocks_callback)

    def timer_callback(self):
        self.run()

    def shutdown(self):
        self.vid.release()
        cv2.destroyAllWindows()

    def show_picture(self, frame):
        cv2.imshow("video", cv2.resize(frame, (0,0), fx=2, fy=2))
        cv2.waitKey(1)

    def take_picture(self):
        ret, frame = self.vid.read()
        return frame
    
    def run(self):
        self.find_blocks_callback(None, GetBlocks.Response())

    def find_blocks_callback(self, request:GetBlocks.Request, response:GetBlocks.Response):
        img = self.take_picture()
        blocks = self.find_blocks(img)
        self.show_blocks(img, blocks)
        response.blocks = self.getBlockMsgs(blocks)
        return response
        

    def find_yellow(self, img):
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        lower = np.array([12, 50, 100])
        upper = np.array([50, 256, 256])
        return cv2.inRange(hsv, lower, upper)
    
    def find_green(self, img):
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        lower = np.array([50, 50, 75])
        upper = np.array([90, 256, 256])
        return cv2.inRange(hsv, lower, upper)
    
    def find_blue(self, img):
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        lower = np.array([90, 50, 100])
        upper = np.array([135, 256, 256])
        return cv2.inRange(hsv, lower, upper)
    
    def find_red(self, img):
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        low_lower = np.array([-1, 50, 100])
        low_upper = np.array([12, 256, 256])
        high_lower = np.array([135, 50, 100])
        high_upper = np.array([181, 256, 256])
        return cv2.bitwise_or(cv2.inRange(hsv, low_lower, low_upper), cv2.inRange(hsv, high_lower, high_upper))
    
    def getBlockMsgs(self, blocks:list[Block]):
        msgs = []
        for block in blocks:
            msgs.append(block.getMsg())
        return msgs
    
    def show_blocks(self, img, blocks):
        for block in blocks:
            img = block.drawOn(img)
        #cv2.imwrite("9.png", img)
        self.show_picture(img)

    def find_blocks(self, img):
        #cv2.imwrite("1.png", img)
        red = self.find_red(img)
        yellow =  self.find_yellow(img)
        green = self.find_green(img)
        blue = self.find_blue(img)
        blocks = []
        blocks += self.find_blocks_from_mask(red, "red")
        blocks += self.find_blocks_from_mask(yellow, "yellow")
        blocks += self.find_blocks_from_mask(green, "green")
        blocks += self.find_blocks_from_mask(blue, "blue")
        return blocks

    def find_blocks_from_mask(self, mask, color):
        blurred = cv2.GaussianBlur(mask, (5, 5), 0)
        threshold = cv2.inRange(blurred, 64, 255)

        (totalLabels, label_ids, values, centroid) = cv2.connectedComponentsWithStats(threshold, 8, cv2.CV_32S)

        blocks = []
        for i in range(1, totalLabels):
            area = values[i, cv2.CC_STAT_AREA]

            if(area > 500):
                mask = (label_ids == i).astype("uint8") * 255
                contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
                rect = cv2.minAreaRect(contours[0])
                (x, y), (w, h), angle = rect

                aspect_ratio = min(w, h) / max(w, h)

                if(aspect_ratio > 0.8):
                    b = Block(x, y, w, h, angle, color, i)
                    blocks.append(b)
        
        return blocks
        

def main(args=None):
    rclpy.init(args=args)
    node = ComputerVision()
    rclpy.spin(node)
    node.shutdown()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
