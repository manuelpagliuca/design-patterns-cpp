#pragma once
#include "Builder.h"

class ConcreteBuilderY : public Builder
{
public:
	void buildPartA()
	{
		product.setA("A-Y");
	}

	void buildPartB()
	{
		product.setB("B-Y");
	}

	void buildPartC()
	{
		product.setC("C-Y");
	}
};