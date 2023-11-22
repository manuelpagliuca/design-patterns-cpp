#pragma once
#include <string>

class Prototype
{
public:
	virtual ~Prototype() { }
	virtual Prototype* clone() = 0;
	virtual std::string type() = 0;
};