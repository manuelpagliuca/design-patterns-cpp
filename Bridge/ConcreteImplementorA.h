#pragma once
#include <iostream>
#include "Implementor.h"

// One possible concrete implementation of Implementor
class ConcreteImplementorA : public Implementor
{
public:
	void operationImpl() const override
	{
		std::cout << "Concrete Implementor A operation" << std::endl;
	}
};