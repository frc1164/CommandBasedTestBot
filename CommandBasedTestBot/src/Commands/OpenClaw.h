#ifndef OpenClaw_H
#define OpenClaw_H

#include "Commands/Command.h"

class OpenClaw : public frc::Command {
public:
	OpenClaw();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // OpenClaw_H
