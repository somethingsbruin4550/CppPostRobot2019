#pragma once
#include "CCTalon.h"
#include <RobotMap.h>
#include <Mechanisms.h>
#include <CCTalon.h>
class Mechanisms
{
private:
    CCTalon *elevator;
    CCTalon *climber;
    CCTalon *intakeLeft;
    CCTalon *intakeRight; 

    public:
        Mechanisms();
        void setElevator(double speed);
        void setClimber(double speed);
        void setIntake(double speed);
}