#include <Arduino.h>
#include "SimplePID.hpp"
SimplePID::SimplePID(double ganhoProporcional, double ganhoIntegral, double ganhoDerivativo)
{
    this->kP = ganhoProporcional;
    this->kI = ganhoIntegral;
    this->kD = ganhoProporcional;
}

SimplePID::~SimplePID()
{
}

void SimplePID::setCoefficients(double ganhoProporcional, double ganhoIntegral, double ganhoDerivativo){
    this->kP = ganhoProporcional;
    this->kI = ganhoIntegral;
    this->kD = ganhoProporcional;
}

void SimplePID::setSetPoint(double setPoint){
    this->setPoint = setPoint;
}

double SimplePID::applyControl(double currentValue){
    double error = setPoint - currentValue;
    errors += error;
    deltaTime = millis() - deltaTime;
    double u = kP * error  + kI * errors * deltaTime + kD * (error) / deltaTime;
    double controllerOutput = u;

    lastError = error;

    return controllerOutput;
}

double SimplePID::getLastError(){
        return lastError;
}