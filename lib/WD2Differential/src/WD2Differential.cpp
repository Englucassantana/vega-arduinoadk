#include "WD2Differential.hpp"
#include <math.h>

Vector3 WD2Differential::applyKinematicModel(double leftWheelVelocity, double rightWheelVelocity, double orientation){
    double r = this->wheelsRadius;
    double uL = leftWheelVelocity;
    double uR = rightWheelVelocity;
    double phi = orientation;
    double l = this->distanceBetweenWheels;

    double xDot = r / 2 * (uL + uR) * cos(phi);
    double yDot = r / 2 * (uL + uR) * sin(phi);
    double phiDot = r / l * (uR - uL);

    Vector3 Velocities = Vector3(xDot, yDot, phiDot);
}