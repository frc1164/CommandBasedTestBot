#ifndef Winch_H
#define Winch_H

#include <Commands/Subsystem.h>
#include <Victor.h>
#include <Joystick.h>

class Winch : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::Victor *Winch1, *Winch2, *Winch3;
	frc::Joystick *Stick;

public:
	Winch();
	void InitDefaultCommand();
	void DriveWinch();
};

#endif  // Winch_H
