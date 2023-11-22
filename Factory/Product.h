#pragma once
#include <string>

class Product
{
public:
	virtual ~Product() {}
	virtual std::string getName() = 0;
};
