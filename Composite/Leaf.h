#pragma once
#include "Composite.h"

class Leaf : public Component
{
public:
	void operation() const override
	{
		std::cout << "Leaf operation" << std::endl;
	}
};