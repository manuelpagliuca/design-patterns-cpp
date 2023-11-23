#pragma once

#include <iostream>

class Flyweight
{
public:
	virtual void operation(const std::string& extrinsicState) const = 0;
};