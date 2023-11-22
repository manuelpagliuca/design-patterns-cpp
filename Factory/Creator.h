#pragma once
#include "Product.h"

class Creator
{
public:
	virtual ~Creator() {}
	virtual Product* createProductA() = 0;
	virtual Product* createProductB() = 0;

	virtual void removeProduct(Product* product) = 0;
};