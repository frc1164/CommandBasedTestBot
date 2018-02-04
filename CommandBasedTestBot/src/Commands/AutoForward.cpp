#include "AutoForward.h"
#include "../RobotMap.h"
#include "../Subsystems/Chassis.h"

AutoForward::AutoForward(double UserTargetDistance, double UserSpeed) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());

	Requires(&TestBotChassis);

	TargetDistance = UserTargetDistance;
	speed = UserSpeed;
	distance = 0;
}

// Called just before this Command runs the first time
void AutoForward::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutoForward::Execute() {
	distance = TestBotChassis.DriveForward(TargetDistance, speed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoForward::IsFinished() {
	return TargetDistance <= distance;
}

// Called once after isFinished returns true
void AutoForward::End() {

	TestBotChassis.Brake();

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoForward::Interrupted() {

}
