#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command
{
private:
	Light& light;

public:
	LightOnCommand(Light& l) : light(l) {}

	void execute() override
	{
		light.turnOn();
	}
};