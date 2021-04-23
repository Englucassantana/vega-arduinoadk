class SimplePID
{
private:
    /* data */
    double kP;
    double kI;
    double kD;
    double setPoint;
    double errors = 0;
    double lastError =0;
    double deltaTime = 0;
public:
    SimplePID(double ganhoProporcional, double ganhoIntegral, double ganhoDerivativo);
    ~SimplePID();
    void setCoefficients(double ganhoProporcional, double ganhoIntegral, double ganhoDerivativo);
    void setSetPoint(double setPoint);
    double applyControl( double currentValue );
    double getLastError();
};


