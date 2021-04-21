#include "../Vector3/src/Vector3.hpp"
class WD2Differential
{
private:
    /* data */
    double wheelsRadius;
    double wheelToCenterDistance;
    double distanceBetweenWheels;
public:
    // WD2Differential(/* args */);
    // ~WD2Differential();
    Vector3 applyKinematicModel(double leftWheelVelocity, double rightWheelVelocity, double orientation );
};

// WD2Differential::WD2Differential(/* args */)
// {
// }

// WD2Differential::~WD2Differential()
// {
// }
