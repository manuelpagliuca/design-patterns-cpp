#pragma once
#include <iostream>
#include "Abstraction.h"

// Implementation of the interface used from the client
class RefinedAbstractionA : public Abstraction
{
public:
	RefinedAbstractionA(Implementor* impl) : Abstraction(impl) {}

	void operation() const override
	{
		std::cout << "Refined Abstraction A operation" << std::endl;
		implementor->operationImpl();
	}
};