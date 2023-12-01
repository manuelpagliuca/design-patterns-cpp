#pragma once

#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Meow!" << std::endl;
    }
};