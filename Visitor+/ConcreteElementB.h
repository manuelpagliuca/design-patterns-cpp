#pragma once

#include <iostream>
#include "Visitor.h"
#include "Element.h"

class ConcreteElementB : public Element
{
public:
	void accept(Visitor& visitor) override
	{
		visitor.visit(*this);
	}

	void operationB()
	{
		std::cout << "ConcreteElementB specific operation." << std::endl;
	}
};