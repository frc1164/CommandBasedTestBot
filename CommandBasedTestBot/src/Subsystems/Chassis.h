#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>
#include <Victor.h>
#include <Joystick.h>

class Chassis : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Joystick *Stick;
	Victor *Right1, *Right2, *Left1, *Left2;


public:
	Chassis();
	void InitDefaultCommand();
	void DriveWinch();
	void DriveStick();
};

#endif  // Chassis_H
