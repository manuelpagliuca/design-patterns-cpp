#pragma once
#include "Product.h"

class ConcreteProductB : public Product
{
public:
	~ConcreteProductB() {}

	std::string getName()
	{
		return "Type B";
	}
};