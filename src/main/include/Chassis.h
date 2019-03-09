#include "AHRS.h"

#include <iostream>
using namespace std;

#include "DriverStation.h"
#include "Encoder.h"
#include "Timer.h"
#include "SPI.h"
using namespace frc;

#include "CCTalon.h"
#include "RobotMap.h"
#include "OI.h"

class Chassis
{
  private:
    static RobotMap *map;

    CCTalon *backLeft;
    CCTalon *backRight;
    CCTalon *frontLeft;
    CCTalon *frontRight;

    AHRS *gyro;
    Encoder *leftE;
    Encoder *rightE;

  public:
    Chassis();
    void driveSpd(double lSpeed, double rSpeed);
    void tankDrive(double yAxis, double xAxis);
    void driveDist(double dist, double debug);
    void turnToAngle(double angl, double debug);
    void reset();

    double getAngle();
    double getLeft();
    double getRight();
}