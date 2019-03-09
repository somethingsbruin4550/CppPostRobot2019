#include "Mechanisms.h"

    Mechanisms::Mechanisms()
    {
        elevator = new CCTalon(RobotMap::ELEVATOR, false);
        climber = new CCTalon(RobotMap::CLIMBER, false);
        intakeLeft = new CCTalon(RobotMap::INTAKE_LEFT, false);
        intakeRight = new CCTalon(RobotMap::INTAKE_RIGHT, false);
    }

    void Mechanisms::setElevator(double speed)
    {
        elevator->set(speed);
    }

    void Mechanisms::setClimber(double speed)
    {
        climber->set(speed);
    }

    void Mechanisms::setIntake(double speed)
    {
        intakeLeft->set(-speed);
        intakeRight->set(speed);
    }
