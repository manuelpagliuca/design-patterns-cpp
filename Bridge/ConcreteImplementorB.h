#pragma once
#include "Implementor.h"

// One possible concrete implementation of Implementor
class ConcreteImplementorB : public Implementor
{
public:
	void operationImpl() const override
	{
		std::cout << "Concrete Implementor B operation" << std::endl;
	}
};