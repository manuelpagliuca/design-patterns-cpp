#pragma once

#include <iostream>
#include "Animal.h"

class Dog : public Animal
{
public:
	void makeSound() const override
	{
		std::cout << "Bark!" << std::endl;
	}
};