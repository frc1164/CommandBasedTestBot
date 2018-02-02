#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/DriveTankWithJoystick.h"

Chassis::Chassis() : Subsystem("ExampleSubsystem") {

	Stick = new Joystick(0);
	Left1 = new Victor(2);
	Left2 = new Victor(3);
	Right1 = new Victor(1);
	Right2 = new Victor(4);

	Left1->SetInverted(true);
	Left2->SetInverted(true);
}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());

	SetDefaultCommand(new DriveTankWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.


void Chassis::DriveStick(){
	double LeftStick = Stick->GetRawAxis(1);
	double RightStick = Stick->GetRawAxis(3);
	if (-0.05 > LeftStick || LeftStick > 0.05) {
		Left1->Set(LeftStick);
		Left2->Set(LeftStick);
	}
	else {
		Left1 -> Set(0.0);
		Left2->Set(0.0);
	}
	if (-0.05 > RightStick || RightStick > 0.05) {
		Right1->Set(RightStick);
		Right2->Set(RightStick);
	}
	else {
		Right1->Set(0.0);
		Right2->Set(0.0);
	}
}
