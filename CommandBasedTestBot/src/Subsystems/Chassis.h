#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>
#include <Victor.h>
#include <Joystick.h>
#include <Encoder.h>

class Chassis : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::Joystick *Stick;
	frc::Victor *Right1, *Right2, *Left1, *Left2;
	frc::Encoder *LeftEncoder, *RightEncoder;


public:
	Chassis();
	void InitDefaultCommand();
	void DriveWinch();
	void DriveStick();

	double DriveForward(double TargetDistance, double speed);
	void Brake();

	void ResetEncoders();
};

#endif  // Chassis_H
