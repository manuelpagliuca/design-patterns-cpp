#pragma once

#include <iostream>
#include "Component.h"

class ConcreteComponent : public Component
{
public:
	void operation() const override
	{
		std::cout << "Basic Component Operation." << std::endl;
	}
};