#include "CloseClaw.h"
#include "../RobotMap.h"

CloseClaw::CloseClaw() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());'
	Requires(&TestBotClaw);
}

// Called just before this Command runs the first time
void CloseClaw::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void CloseClaw::Execute() {
	TestBotClaw.CloseClaw();
}

// Make this return true when this Command no longer needs to run execute()
bool CloseClaw::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CloseClaw::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CloseClaw::Interrupted() {

}
