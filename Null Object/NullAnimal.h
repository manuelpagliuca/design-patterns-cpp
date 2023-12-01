#pragma once

#include "Animal.h"

class NullAnimal : public Animal
{
public:
	void makeSound() const override
	{
		// nothing
	}
};