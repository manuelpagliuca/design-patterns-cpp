#pragma once
#include "Prototype.h"

class ConcretePrototypeA : public Prototype
{
public:
	~ConcretePrototypeA() { }

	Prototype* clone()
	{
		return new ConcretePrototypeA();
	}

	std::string type()
	{
		return "Type A";
	}

	// ...
};