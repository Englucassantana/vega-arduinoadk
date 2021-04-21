// class PolarConvertion{

//     static float getDistance(Vector2 target, Vector2 reference){
//         float distance = Vector2.Distance(target,reference);
//         return distance;
//     }
//     static float getAngle(Vector2 target, Vector2 reference){
//         float angle = -Mathf.Atan2((target.x-reference.x),(target.y-reference.y))*Mathf.Rad2Deg + 90;
//         // angle = AnglesHelper.to180(angle);
//         return angle;
//     }

// }

#include "Arduino.h"
#include "PolarConvertion.hpp"
#include "../Vector2/scr/Vector2.hpp"
#include <math.h>
#include "../AnglesHelper/src/AnglesHelper.hpp"

double PolarConvertion::getDistance(Vector2 target, Vector2 reference ){
    double r = pow(target.x - reference.x,2) + pow(target.y - reference.y,2);
    r = sqrt(r);
    return r;
}

double PolarConvertion::getDegreeAngle(Vector2 target, Vector2 reference){
    double teta =  atan2(target.y - reference.y, target.x - reference.x)*RAD_TO_DEG;
    teta = AnglesHelper::to180(teta);
    return teta;
}