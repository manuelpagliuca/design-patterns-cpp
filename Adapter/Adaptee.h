#pragma once
#include <iostream>

// Incompatibile class with the user interface (class to adapt)
class Adaptee
{
public:
	~Adaptee() {}

	void specificRequest() const
	{
		std::cout << "Specific request in Adaptee" << std::endl;
	}
};