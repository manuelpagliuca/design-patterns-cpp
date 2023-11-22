#pragma once
#include <iostream>
#include "Abstraction.h"

// Implementation of the interface used from the client
class RefinedAbstractionB : public Abstraction
{
public:
	RefinedAbstractionB(Implementor* impl) : Abstraction(impl) {}

	void operation() const override
	{
		std::cout << "Refined Abstraction B operation" << std::endl;
		implementor->operationImpl();
	}
};