#include "Command.h"
#include "Light.h"

class LightOffCommand : public Command
{
private:
	Light& light;

public:
	LightOffCommand(Light& l) : light(l) {}

	void execute() override
	{
		light.turnOff();
	}
};