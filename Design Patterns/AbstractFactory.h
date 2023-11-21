#pragma once
#include "Shape.h"

class AbstractFactory {
public:
    virtual Shape* createShape() = 0;
    virtual ~AbstractFactory() {}
};