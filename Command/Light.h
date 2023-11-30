#pragma once

#include <iostream>

class Light
{
public:
	void turnOn()
	{
		std::cout << "Luce accesa" << std::endl;
	}

	void turnOff()
	{
		std::cout << "Luce spenta" << std::endl;
	}
};