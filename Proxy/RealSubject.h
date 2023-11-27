#pragma once

#include <iostream>
#include "Subject.h"

class RealSubject : public Subject
{
public:
	void request() const override
	{
		std::cout << "RealSubject: Handling request." << std::endl;
	}
};