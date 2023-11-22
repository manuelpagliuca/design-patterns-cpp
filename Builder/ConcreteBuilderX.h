#pragma once
#include "Builder.h"

class ConcreteBuilderX : public Builder
{
public:
	void buildPartA()
	{
		product.setA("A-X");
	}

	void buildPartB()
	{
		product.setB("B-X");
	}

	void buildPartC()
	{
		product.setC("C-X");
	}
};