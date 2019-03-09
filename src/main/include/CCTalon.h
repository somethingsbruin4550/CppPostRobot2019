#pragma once
#include <iostream>
#include <ctre/phoenix/motorcontrol/can/WPI_TalonSRX.h>
using namespace ctre::phoenix::motorcontrol::can;

class CCTalon : public WPI_TalonSRX {
public: 
    CCTalon(int port, bool reverse);
    void set(double speed);
private:
    bool reverse; 
}