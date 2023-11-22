#pragma once
#include "Prototype.h"

class ConcretePrototypeB : public Prototype
{
public:
	~ConcretePrototypeB() {}

	Prototype* clone()
	{
		return new ConcretePrototypeB();
	}

	std::string type()
	{
		return "Type B";
	}

	// ...
};