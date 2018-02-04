#ifndef DriveTankWithJoystick_H
#define DriveTankWithJoystick_H

#include <Commands/Command.h>

class DriveTankWithJoystick : public frc::Command {
public:
	DriveTankWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveTankWithJoystick_H
