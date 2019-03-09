#include "OI.h"

OI::OI(){
    this->_controller = new Joystick(0);
    this->_controller = new Joystick(1);
}

bool OI::getLeft(){
    if((_controller->GetPOV() > 240) && (_controller->GetPOV() < 300))
        return true;
    else 
        return false;         
}

bool OI::getUp(){
    if((_controller->GetPOV() > 330) && (_controller->GetPOV() < 30))
        return true;
    else
        return false;
    
}

bool OI::getRight(){
    if((_controller->GetPOV() > 60) && (_controller->GetPOV() < 120))
        return true;
    else 
        return false; 
}

bool OI::getDown(){
     if((_controller->GetPOV() > 150) && (_controller->GetPOV() < 210))
        return true;
    else 
        return false; 
    

}

double OI::getLJoystickXAxis(){
    return _controller->GetRawAxis(RobotMap::R_JOYSTICK_HORIZONTAL);
}

double OI::getLJoystickYAxis(){
    return _controller->GetRawAxis(RobotMap::R_JOYSTICK_VERTICAL) * -1;
}

double OI::getRJoystickXAxis(){
    return _controller->GetRawAxis(RobotMap::R_JOYSTICK_HORIZONTAL);
}

double OI::getRJoystickYAxis(){
    return _controller->GetRawAxis(RobotMap::R_JOYSTICK_VERTICAL) * -1;
}

double OI::getLJoystickXAxisC2(){
    return _controller2->GetRawAxis(RobotMap::R_JOYSTICK_HORIZONTAL);
}

double OI::getLJoystickYAxisC2(){
    return _controller2->GetRawAxis(RobotMap::R_JOYSTICK_VERTICAL) * -1;
}

double OI::getRJoystickXAxisC2(){
    return _controller2->GetRawAxis(RobotMap::R_JOYSTICK_HORIZONTAL);
}

double OI::getRJoystickYAxisC2(){
    return _controller2->GetRawAxis(RobotMap::R_JOYSTICK_VERTICAL) * -1;
}

double OI::getLT(){
    return _controller->GetRawAxis(RobotMap::LT);
}

double OI::getRT(){
    return _controller->GetRawAxis(RobotMap::RT);
}

double OI::getLTC2(){
    return _controller2->GetRawAxis(RobotMap::LT);
}

double OI::getRTC2(){
    return _controller2->GetRawAxis(RobotMap::RT);
}

bool OI::getAButton(){
    return _controller->GetRawButton(RobotMap::A_BUTTON);
}

bool OI::getBButton(){
    return _controller->GetRawButton(RobotMap::B_BUTTON);
}

bool OI::getYButton(){
    return _controller->GetRawButton(RobotMap::Y_BUTTON);
}

bool OI::getXButton(){
    return _controller->GetRawButton(RobotMap::X_BUTTON);
}

bool OI::getAButtonC2(){
    return _controller2->GetRawButton(RobotMap::A_BUTTON);
}

bool OI::getBButtonC2(){
    return _controller2->GetRawButton(RobotMap::B_BUTTON);
}

bool OI::getYButtonC2(){
    return _controller2->GetRawButton(RobotMap::Y_BUTTON);
}

bool OI::getXButtonC2(){
    return _controller2->GetRawButton(RobotMap::X_BUTTON);
}

bool OI::getLB(){
    return _controller->GetRawButton(RobotMap::LB_BUTTON);
}

bool OI::getRB(){
    return _controller->GetRawButton(RobotMap::RB_BUTTON);
}

bool OI::getLBC2(){
    return _controller2->GetRawButton(RobotMap::LB_BUTTON);
}

bool OI::getRBC2(){
    return _controller2->GetRawButton(RobotMap::RB_BUTTON);
}

bool OI::getStart(){
    return _controller->GetRawButton(RobotMap::START_BUTTON);
}

bool OI::getSelect(){
    return _controller->GetRawButton(RobotMap::SELECT_BUTTON);
}

bool OI::getStartC2(){
    return _controller2->GetRawButton(RobotMap::START_BUTTON);
}
bool OI::getSelectC2(){
    return _controller2->GetRawButton(RobotMap::SELECT_BUTTON);
}


double OI::normalize(double value, double min, double max){
	if( value > max )
	{
		return max;
	}
	else if( value < min )
	{
		return min;
	}
    
	return value;
}