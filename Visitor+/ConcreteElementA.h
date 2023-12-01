#pragma once

#include <iostream>
#include "Visitor.h"
#include "Element.h"

class ConcreteElementA : public Element
{
public:
	void accept(Visitor& visitor) override
	{
		visitor.visit(*this);
	}

	void operationA()
	{
		std::cout << "ConcreteElementA specific operation." << std::endl;
	}
};