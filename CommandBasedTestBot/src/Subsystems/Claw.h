#ifndef Claw_H
#define Claw_H
#include <Solenoid.h>
#include <Compressor.h>
#include <Commands/Subsystem.h>

//Testing
class Claw : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	frc::Compressor *ClawCompressor;
	frc::Solenoid *sol0;
	frc::Solenoid *sol1;
public:
	Claw();
	void InitDefaultCommand();
	void CloseClaw();
	void OpenClaw();
};

#endif  // Claw_H
