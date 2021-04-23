#include <Arduino.h>
#include "unity.h"
#include <../lib/TesteClass/src/TesteClass.hpp>
#include <../lib/PolarConvertion/src/PolarConvertion.hpp>
#include "../lib/Vector2/scr/Vector2.hpp"
#include "../lib/AnglesHelper/src/AnglesHelper.hpp"


void setup() {
    delay(2000);
  // put your setup code here, to run once:
  UNITY_BEGIN();
  Serial.begin(115200);
  Serial.println("Serial Iniciado");
}

void loop() {
  // put your main code here, to run repeatedly:

  Vector2 target = Vector2(0,-4);
  Vector2 reference = Vector2(4,0);
  double r = PolarConvertion::getDistance( target, reference);
  double teta = PolarConvertion::getDegreeAngle(target, reference);
  Serial.print("Distância: ");
  Serial.print(r);
  Serial.print(" Angulo: ");
  Serial.print(teta);
  Serial.println();
  UNITY_END();
}