#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>
#include <Victor.h>
#include <Joystick.h>
#include <Encoder.h>

class Chassis : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Joystick *Stick;
	Victor *Right1, *Right2, *Left1, *Left2;
	Encoder *LeftEncoder, *RightEncoder;


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
