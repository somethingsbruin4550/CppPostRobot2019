#include "Chassis.h"

Chassis::Chassis(){
    this->map = new RobotMap;

    this->backLeft = new CCTalon(map->BACK_LEFT, map->BACK_LEFT_REVERSE);
    this->backRight = new CCTalon(map->BACK_RIGHT, map->BACK_RIGHT_REVERSE);
    this->frontLeft = new CCTalon(map->FRONT_LEFT, map->FRONT_LEFT_REVERSE);
    this->frontRight = new CCTalon(map->FRONT_RIGHT, map->FRONT_RIGHT_REVERSE);

    try{
        this->gyro = new AHRS(SPI::Port(HAL_SPI_kMXP));
    }
    catch(exception& e){
        cout << "!NAV-X Eception!" << endl;
    }

    this->leftE = new Encoder(map->ENCODER_A_LEFT, map->ENCODER_B_LEFT);
    
    this->rightE = new Encoder(map->ENCODER_A_RIGHT, map->ENCODER_B_RIGHT);

    // try {
	// 	// Tries to build and gyro
	// 	_gyro = new AHRS(SPI.Port.kMXP);
	// } catch (RuntimeException e) {
	// 	DriverStation.reportError("Error instantiating navX-MXP:  " + e.getMessage(), true);
	// }
}


void Chassis::reset() {
    leftE->Reset();
    rightE->Reset();
    gyro->Reset();
}

void Chassis::driveSpd(double lSpeed, double rSpeed) {
        backLeft->set(lSpeed);
        backRight->set(rSpeed);
        frontLeft->set(lSpeed);
        frontRight->set(rSpeed);        
}

void Chassis::tankDrive(double yAxis, double xAxis) {
    	frontRight->set(OI::normalize((yAxis-xAxis), -1.0, 1.0));
        frontLeft->set(OI::normalize((yAxis+xAxis), -1.0, 1.0));
        backRight->set(OI::normalize((yAxis-xAxis), -1.0, 1.0));
        backLeft->set(OI::normalize((yAxis+xAxis), -1.0, 1.0));
}

void Chassis::driveDist(double dist, double debug) {
    double feed_forward = 0;
    double max = 1.0;
    double p; 
    double pos = (getLeft() + getRight())/2;
    double error = dist-pos;
    double error_check = dist/100;
    double speed;

    while(error >= error_check) {
        pos = (leftE->Get() + rightE->Get())/2;
        error = dist-pos;
        speed = error*p + feed_forward; 

        driveSpd(speed, speed);

        if(debug){
            cout << "Position: " << pos;
            cout << "Error: " << error;
            cout << "Speed: " << speed;                                 
        }            
    }
    
}

void Chassis::turnToAngle(double angl, double debug) {
    double feed_forward = 0;
    double max = 0.275;
    double p = 0.005;
    double goal = angl; 
    double pos = getAngle();  
    double error = angl - pos; 
    double error_check = angl / 100;
    double speed = 0;

    while(error >= error_check){
        pos = getAngle();
        error = goal - pos;
        speed = OI::normalize(error *  p + feed_forward, max, -max);

        driveSpd(speed, -speed);

        if(debug){
            cout << "Position: " << pos;
            cout << "Error: " << error;
            cout << "Speed: " << speed; 
        }                                    
    }
  
}

double Chassis::getAngle(){
    return gyro->GetAngle();
}

double Chassis::getLeft() {
    return leftE->Get();
}

double Chassis::getRight() {
    return rightE->Get();
}