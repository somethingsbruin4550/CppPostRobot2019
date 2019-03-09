#pragma once
#include <Joystick.h>
using namespace frc;

#include "RobotMap.h"

class OI{
private:
    static Joystick *_controller;
	static Joystick *_controller2;
	
public:
	OI();

	static bool getLeft();
	static bool getUp();
	static bool getRight();
	static bool getDown();
	double getLJoystickXAxis();
	double getLJoystickYAxis();
	double getRJoystickXAxis();
	double getRJoystickYAxis();
	double getLJoystickXAxisC2();
	double getLJoystickYAxisC2();
	double getRJoystickXAxisC2();
	double getRJoystickYAxisC2();
	double getLT();
	double getRT();
	double getLTC2();
	double getRTC2();
	bool getAButton();
	bool getBButton();
	bool getYButton();
	bool getXButton();
	bool getAButtonC2();
	bool getBButtonC2();
	bool getYButtonC2();
	bool getXButtonC2();
	bool getLB();
	bool getRB();
	bool getLBC2();
	bool getRBC2();
	bool getStart();
	bool getSelect();
	bool getStartC2();
	bool getSelectC2();
	
	static double normalize(double value, double min, double max);
}