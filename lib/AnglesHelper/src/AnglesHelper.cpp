#include "AnglesHelper.hpp"
#include <math.h>

double AnglesHelper::to180(double angles){
    double res = angles;
    res= fmod(res,360); //manter o angulo no range de 360°
    
    if( res >= 181) res -= 360;

    if(res == -180) res = 0;
    
    return res;
}