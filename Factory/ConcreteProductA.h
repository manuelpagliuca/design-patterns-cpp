#pragma once
#include "Product.h"

class ConcreteProductA : public Product
{
public:
	~ConcreteProductA() {}

	std::string getName()
	{
		return "Type A";
	}
};