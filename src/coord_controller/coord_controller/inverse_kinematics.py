#!/user/bin/env3
import numpy as np
from scipy.spatial.transform import Rotation
from itertools import combinations
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
d0 = 144.56
d1 = 110.4
d2 = 96.0
d3 = 64.62
d4 = 73.18
d5 = 48.6

def sqrmag(arr:np.ndarray):
    return sum([e * e for e in arr])
def mag(arr:np.ndarray):
    return np.sqrt(sqrmag(arr))
def norm(arr:np.ndarray):
    return arr / mag(arr)

def z_invariant_inverse_kinematics(x:float, y:float, z:float, pump=True):
    bestTheta = None
    bestSol = None
    best = 0
    for theta in range(0, 360, 5):
        try:
            res = inverse_kinematics(x, y, z, Rotation.from_euler('xyz', [0, 0, theta]), returnEval=True)
        
            if res is not None:
                sol, eval = res
                if eval > best:
                    best = eval
                    bestSol = sol
                    bestTheta = theta
        except:
            pass
    return  bestSol, bestTheta

def inverse_kinematics(x:float, y:float, z:float, rot:Rotation, pump=True, returnEval=False):
    bestSolutionUnitVectors = None
    best = 0
    p5 = np.array([x,y,z-d0])
    if pump:
        p5 = pumpCoordsToHeadCoords(p5, rot)
    p6, p4 = getP6andP4(p5, rot)
    p3p2s = getP3sP2s(p5, p4)
    for p3, p2 in p3p2s:
        if mag(p2) < d1 + d2:
            p1s = getP1s(p2)
            for p1 in p1s:
                eval = evalSolution(p1, p2, p3, p4, p5, p6)
                if(eval > best):
                    best = eval
                    bestSolutionUnitVectors = (norm(p1),
                                            norm(p2 - p1),
                                            norm(p3 - p2),
                                            norm(p4 - p3),
                                            norm(p5 - p4),
                                            norm(p6 - p5))
                    #showVectors(p1,p2,p3,p4,p5,p6)
    if bestSolutionUnitVectors is None:
        return None
    
    angles = unitVectorsToRotations(bestSolutionUnitVectors)
    if returnEval:
        return angles, eval
    return angles

def set_axes_equal(ax):
    xlim = ax.get_xlim3d()
    ylim = ax.get_ylim3d()
    zlim = ax.get_ylim3d()
    r = max(np.ptp(xlim), np.ptp(ylim), np.ptp(zlim))
    xm, ym, zm = np.mean(xlim), np.mean(ylim), np.mean(zlim)

    ax.set_xlim3d([xm - r, xm + r])
    ax.set_ylim3d([ym - r, ym + r])
    ax.set_zlim3d([zm - r, zm + r])

def showVectors(p1,p2,p3,p4,p5,p6):
    points = [np.array([0,0,0]), p1, p2, p3, p4, p5, p6]
    fig = plt.figure()
    ax = fig.add_subplot(projection='3d')
    ax.set_box_aspect([1.0, 1.0, 1.0])
    for i in range(1, len(points)):
        p1 = points[i - 1]
        p2 = points[i]
        ax.plot([p1[0], p2[0]], [p1[1], p2[1]], zs=[p1[2], p2[2]])
    set_axes_equal(ax)
    plt.show()


def unitVectorsToRotations(vectors):
    v1, v2, v3, v4, v5, v6 = vectors
    y = np.array([0,-1,0])
    z = np.array([0,0,1])
    j1 = angle(y, v3, z)
    j2 = angle(z, v1, v3)
    j3 = angle(v1, v2, v3)
    j4 = angle(v2, v4, v3)
    j5 = angle(v3, v5, v4) - 90
    j6 = angle(v4, v6, v5)
    angles = [j1, j2, j3, j4, j5, j6]
    for i in range(len(angles)):
        while angles[i] < -180:
            angles[i] += 360
        while angles[i] > 180:
            angles[i] -= 360
    return angles

def angle(va:np.ndarray, vb:np.ndarray, vn:np.ndarray):
    y = np.dot(np.cross(va, vb), vn)
    x = np.dot(va, vb)
    return np.degrees(np.arctan2(y, x))
            
def evalSolution(p1, p2, p3, p4, p5, p6):
    points = [p1, p2, p3, p4, p5, p1+30*norm(p4-p3), p2+30*norm(p4-p3), np.array([0,0,0])]
    score = 0
    for p in points:
        score += (p[2] + d0) * (p[2] + d0)
    closeness = 0
    for a, b in combinations(points, 2):
        closeness += 1 / (sqrmag(a - b))
        if(mag(a - b) < 29):
            return 0
    correction = [-40, -8, 0, 0, 0, -45]
    bestSolutionUnitVectors = (norm(p1),
                                            norm(p2 - p1),
                                            norm(p3 - p2),
                                            norm(p4 - p3),
                                            norm(p5 - p4),
                                            norm(p6 - p5))
    angles = unitVectorsToRotations(bestSolutionUnitVectors)
    angleScore = 1
    for i in range(len(angles)):
        angle = angles[i] + correction[i]
        while angle < -180:
            angle += 360
        while angle > 180:
            angle -= 360
        s = (181 - abs(angle))/20
        angleScore *= max(min(s * s, 1), 0.001)
    return score*closeness

def pumpCoordsToHeadCoords(v:np.ndarray, rot:Rotation):
    offset = np.array([14.605, 0, -64.86])
    rotatedOffset = rot.apply(offset)
    return v - rotatedOffset

def getP6andP4(v:np.ndarray, rot:Rotation):
    delta = np.array([-d5, 0, 0])
    delta = rot.apply(delta)
    p4 = v + delta
    p6 = v + rot.apply(np.array([0, 1, 0]))
    return p6, p4

def getP3sP2s(v:np.ndarray, p4:np.ndarray):
    xy = np.array([p4[0], p4[1], 0])
    r = mag(xy)
    m = np.sqrt(r * r - d3 * d3)
    uUnrotated = xy * m / r
    uUnrotated[2] = p4[2]
    theta = np.arcsin(d3 / r)
    u1 = rotateVecAroundZ(uUnrotated, theta)
    u2 = rotateVecAroundZ(uUnrotated, theta)
    return getP3sand2sFromUs(v, p4, u1) + getP3sand2sFromUs(v, p4, u2)

def rotateVecAroundZ(v:np.ndarray, theta:float):
    x, y, z = v
    xn = x * np.cos(theta) - y * np.sin(theta)
    yn = x * np.sin(theta) + y * np.cos(theta)
    return np.array([xn, yn, z])

def getP3sand2sFromUs(v:np.ndarray, p4:np.ndarray, u:np.ndarray):
    perp1 = u - p4
    perp2 = v - p4
    delta = np.cross(perp1, perp2)
    delta *= d4 / mag(delta)
    p3_1 = p4 + delta
    p2_1 = u + delta
    p3_2 = p4 - delta
    p2_2 = u - delta
    return [(p3_1, p2_1), (p3_2, p2_2)]

def getP1s(p2:np.ndarray):
    z2 = p2[2]
    r2 = mag(p2[:2])
    theta = np.arctan(z2 / r2)
    p2mag = mag(p2)
    v = (d1*d1 + p2mag * p2mag - d2*d2) / (2 * d1 * p2mag)
    psi = np.arccos(v)
    p1_1 = getP1fromThetaPsi(p2, theta, psi)
    p1_2 = getP1fromThetaPsi(p2, theta, -psi)
    return [p1_1, p1_2]

def getP1fromThetaPsi(p2, theta, psi):
    z1 = np.sin(theta + psi) * d1
    r1 = np.cos(theta + psi) * d1
    p2floor = p2 * 1
    p2floor[2] = 0
    p1 = p2floor * r1 / mag(p2floor)
    p1[2] = z1
    return p1

if __name__ == "__main__":
    inverse_kinematics(160, 0, 160, Rotation.from_euler('xyz', [45,45,45], degrees=True))