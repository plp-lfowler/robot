#!/user/bin/env3
# -*- coding: utf-8 -*-
from enum import Enum, auto



class Target:
    def __init__(self, x, y, z, theta):
        self.x = x
        self.y = y
        self.z = z
        self.theta = theta

class State:
    def __init__(self):
        self.zone = Zone.WATCHING
        self.height = Height.TRANSITION
        self.pump = Pump.OFF

    def canMoveToZone(self, zone):
        if self.zone == zone:
            return True
        if self.height == Height.TRANSITION:
            return True
        return False
    
    def canMoveToHeight(self, height):
        if self.height == height:
            return True
        zonesCanMoveDownIn = [Zone.BIN_A1, Zone.BIN_A2, Zone.BIN_B1, Zone.BIN_B2, Zone.BIN_D1, Zone.BIN_D2, Zone.CAMERA]
        if height != Height.TRANSITION and self.zone not in zonesCanMoveDownIn:
            return False

        if self.height == Height.TRANSITION:
            if height == Height.FULL:
                return True
        if self.height == Height.FULL:
            if height == Height.TRANSITION or height == Height.LOWERED:
                return True
        if self.height == Height.LOWERED:
            if height == Height.FULL or height == Height.ABOVE_TARGET:
                return True
        if self.height == Height.ABOVE_TARGET:
            if height == Height.LOWERED or height == Height.AT_TARGET:
                return True
        if self.height == Height.AT_TARGET:
            if height == Height.ABOVE_TARGET:
                return True
        return False
    
    def canChangePumpTo(self, pump):
        if self.pump == pump:
            return True
        if self.height == Height.AT_TARGET:
            return True
        return False

class Location:
    def __init__(self):
        pass

    @staticmethod
    def get_coords(state:State, target:Target):
        #x-y-theta
        coords = {Zone.BIN_A1: (-30, 180, None),
                  Zone.BIN_A2: (15, 180, None),
                  Zone.BIN_B1: (100, 180, None),
                  Zone.BIN_B2: (150, 180, None),
                  Zone.BIN_D1: (115, -150, None),
                  Zone.BIN_D2: (160, -150, None),
                  Zone.WATCHING: (-50, 170, None),
                  Zone.CAMERA: (200, 0, None)}
        #theta
        heights = {Height.TRANSITION: 120,
                   Height.FULL: 120,
                   Height.LOWERED: target.z + 40,
                   Height.ABOVE_TARGET: target.z + 20,
                   Height.AT_TARGET: target.z-2}
        x, y, theta = coords[state.zone]
        z = heights[state.height]
        if state.zone == Zone.CAMERA:
            if target.x >= 90 and target.x <= 240 and target.y >= -80 and target.y <= 85:
                x = target.x
                y = target.y
                return (x, y, z, None)
            raise ValueError("Point (" + str(round(target.x)) + ", " + str(round(target.y)) + ") is not in camera zone")
        if theta: theta += target.theta
        return (x, y, z, theta)





class Zone(Enum):
    BIN_A1 = auto()
    BIN_A2 = auto()
    BIN_B1 = auto()
    BIN_B2 = auto()
    #BIN_C1 = auto()
    #BIN_C2 = auto()
    BIN_D1 = auto()
    BIN_D2 = auto()
    WATCHING = auto()
    CAMERA = auto()

class Height(Enum):
    TRANSITION = auto()
    FULL = auto()
    LOWERED = auto()
    ABOVE_TARGET = auto()
    AT_TARGET = auto()

class Pump(Enum):
    ON = auto()
    OFF = auto()

