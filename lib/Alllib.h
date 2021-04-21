//Apenas um teste de namespace

#include "testnamespace/src/testnamespace.hpp"
#include "AnglesHelper/src/AnglesHelper.hpp"
#include "PolarConvertion/src/PolarConvertion.hpp"

namespace test{
    testnamespace::testnamespace(/* args */)
    {
    }

    testnamespace::~testnamespace()
    {
    }
    double AnglesHelper::to180(double angles){
        double res = angles;
        res= fmod(res,360); //manter o angulo no range de 360°
        
        if( res >= 181) res -= 360;

        if(res == -180) res = 0;
        
        return res;
    }
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
}