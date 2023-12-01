#pragma once+

#include <iostream>
#include "Observer.h"

class ConcreteObserver : public Observer
{
private:
	std::string observerName;

public:
	ConcreteObserver(const std::string& name) : observerName(name) {}

	void update(const std::string& message) override
	{
		std::cout << "Observer " << observerName << " received update: " << message << std::endl;
	}
};