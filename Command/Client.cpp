#include <iostream>

#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "RemoteControl.h"

int main()
{
	// Receiver
	Light livingRoomLight;

	// Commands
	LightOnCommand livingRoomLightOn(livingRoomLight);
	LightOffCommand livingRoomLightOff(livingRoomLight);

	// Invoker
	RemoteControl remote;

	remote.setCommand(&livingRoomLightOn);
	remote.pressButton();

	remote.setCommand(&livingRoomLightOff);
	remote.pressButton();

	return 0;

}