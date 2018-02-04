#include <Subsystems/Claw.h>
#include "../RobotMap.h"

#define sol0id 0
#define sol1id 1
#define canid 27
//this needs updating

Claw::Claw() : frc::Subsystem("ExampleSubsystem") {
	ClawCompressor = new frc::Compressor();
	sol0 = new frc::Solenoid(canid, sol0id);
	sol1 = new frc::Solenoid(canid, sol1id);
}

void Claw::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Claw::CloseClaw(){
	sol0->Set(true);
	sol1->Set(false);
}

void Claw::OpenClaw(){
	sol0->Set(false);
	sol1->Set(true);
}
