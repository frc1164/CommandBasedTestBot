#include "Winch.h"
#include "../RobotMap.h"
#include "../Commands/RunWinchWithJoystick.h"

Winch::Winch() : Subsystem("ExampleSubsystem") {

	Winch1 = new frc::Victor(5);
	Winch2 = new frc::Victor(6);
	Winch3 = new frc::Victor(7);
	Stick = new frc::Joystick(0);
}

void Winch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());

	SetDefaultCommand(new RunWinchWithJoystick());
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

void Winch::DriveWinch(){
	double StickValue = Stick->GetRawAxis(2);

	if (Stick->GetRawButton(2) == 1){
		Winch1->Set(1);
		Winch2->Set(1);
		Winch3->Set(1);
	}
	else{
	Winch1->Set(StickValue);
	Winch2->Set(StickValue);
	Winch3->Set(StickValue);
	}
}
