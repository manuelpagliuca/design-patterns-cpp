#pragma once
#include "AbstractFactory.h"
#include "Circle.h"

class CircleFactory : public AbstractFactory {
public:
    Shape* createShape() override
    {
        return new Circle();
    }
};