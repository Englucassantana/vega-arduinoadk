#include <Arduino.h>
#include <Wire.h>
#include <../lib/TesteClass/src/TesteClass.hpp>
#include <../lib/PolarConvertion/src/PolarConvertion.hpp>
#include "../lib/Vector2/scr/Vector2.hpp"
#include "../lib/AnglesHelper/src/AnglesHelper.hpp"

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  Serial.begin(460800);
  Serial.println("Serial Iniciado");
}

void loop() {
  // put your main code here, to run repeatedly:
  TesteClass demo;
  demo.testeFunc();
  Vector2 target = Vector2(0,-4);
  Vector2 reference = Vector2(4,0);
  double r = PolarConvertion::getDistance( target, reference);
  double teta = PolarConvertion::getDegreeAngle(target, reference);
  Serial.print("Distância: ");
  Serial.print(r);
  Serial.print(" Angulo: ");
  Serial.print(teta);
  Serial.println();
  

}