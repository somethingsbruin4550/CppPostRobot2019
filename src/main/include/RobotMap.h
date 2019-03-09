class RobotMap
{
public:
    // Wheel Talons
	static const int BACK_LEFT = 0;
	static const int BACK_RIGHT = 7;
	static const int FRONT_RIGHT = 8;
	static const int FRONT_LEFT = 2;

	//Talon Ports for Intake
	static const int INTAKE_LEFT = 6;
	static const int INTAKE_RIGHT = 4;
			
	//Talon ports for Elevator
	static const int ELEVATOR = 5;
		
	//Talon ports for Climber 
	static const int CLIMBER = 1;

    // Wheel Talon Polarity
	static const bool FRONT_LEFT_REVERSE = false;
	static const bool BACK_LEFT_REVERSE = false;		
	static const bool FRONT_RIGHT_REVERSE = true;
	static const bool BACK_RIGHT_REVERSE = true; 


	// Wheel Encoder Ports
	static const int ENCODER_A_RIGHT = 0;
	static const int ENCODER_B_RIGHT = 1;
	static const int ENCODER_A_LEFT = 2;
	static const int ENCODER_B_LEFT = 3;
	static const int ENCODER_ELEVATOR_A = 4;
	static const int ENCODER_ELEVATOR_B = 5; 


	// Joystick Axises
	static const int L_JOYSTICK_HORIZONTAL = 0;
	static const int L_JOYSTICK_VERTICAL = 1;
	static const int LT = 2;
	static const int RT = 3;
	static const int R_JOYSTICK_HORIZONTAL = 4;
	static const int R_JOYSTICK_VERTICAL = 5;

	// Controller Buttons
	static const int A_BUTTON = 1;
	static const int B_BUTTON = 2;
	static const int X_BUTTON = 3;
	static const int Y_BUTTON = 4;
	static const int LB_BUTTON = 5;
	static const int RB_BUTTON = 6;
	static const int SELECT_BUTTON = 7;
	static const int START_BUTTON = 8;
	//These buttons are when you push down the left and right circle pad
	static const int L_JOYSTICK_BUTTON = 9;
	static const int R_JOYSTICK_BUTTON = 10; 
}