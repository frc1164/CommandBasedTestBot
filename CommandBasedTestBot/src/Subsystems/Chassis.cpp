#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/DriveTankWithJoystick.h"

#include <SmartDashboard/SmartDashboard.h>
#include <Encoder.h>


Chassis::Chassis() : frc::Subsystem("ExampleSubsystem") {

	Stick = new frc::Joystick(0);
	Left1 = new frc::Victor(2);
	Left2 = new frc::Victor(3);
	Right1 = new frc::Victor(1);
	Right2 = new frc::Victor(4);

	LeftEncoder = new frc::Encoder(0,1, true, frc::Encoder::EncodingType::k2X);
	RightEncoder = new frc::Encoder(2,3, false, frc::Encoder::EncodingType::k2X);

	LeftEncoder->Reset();
	RightEncoder->Reset();

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

void Chassis::Brake(){
	Right1->Set(0);
	Right2->Set(0);
	Left1->Set(0);
	Left2->Set(0);
}

double Chassis::DriveForward(double TargetDistance, double speed){

	double EncoderAvg = (LeftEncoder->GetDistance() + RightEncoder->GetDistance()) / 2.0;
	double inches = EncoderAvg/kEncoder;

	frc::SmartDashboard::PutNumber("Inches", inches);

	Right1->Set(speed);
	Right2->Set(speed);
	Left1->Set(speed);
	Left2->Set(speed);

	return inches;
}

void Chassis::ResetEncoders(){
	LeftEncoder->Reset();
	RightEncoder->Reset();
}
