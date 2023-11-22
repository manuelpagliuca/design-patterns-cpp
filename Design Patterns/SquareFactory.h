#pragma once
#include "AbstractFactory.h"
#include "Square.h"

class SquareFactory : public AbstractFactory {
public:
    Shape* createShape() override
    {
        return new Square();
    }
};
