#ifndef CloseClaw_H
#define CloseClaw_H

#include "Commands/Command.h"

class CloseClaw : public frc::Command{
public:
	CloseClaw();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // CloseClaw_H
