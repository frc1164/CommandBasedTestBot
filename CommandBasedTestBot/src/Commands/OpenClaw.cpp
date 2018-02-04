#include "OpenClaw.h"
#include "../RobotMap.h"

OpenClaw::OpenClaw() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&TestBotClaw);
}

// Called just before this Command runs the first time
void OpenClaw::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void OpenClaw::Execute() {
	TestBotClaw.OpenClaw();
}

// Make this return true when this Command no longer needs to run execute()
bool OpenClaw::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void OpenClaw::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void OpenClaw::Interrupted() {

}
