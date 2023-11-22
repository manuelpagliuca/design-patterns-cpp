#pragma once
#include "Creator.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

class ConcreteCreator : public Creator
{
public:
	~ConcreteCreator() {}

	Product* createProductA()
	{
		return new ConcreteProductA();
	}

	Product* createProductB()
	{
		return new ConcreteProductB();
	}

	void removeProduct(Product* product)
	{
		delete product;
	}
};