#pragma once
#include "Shape.h"
#include <iostream>

class Circle : public Shape {
public:
    void draw() override
    {
        std::cout << "Drawing a Circle" << std::endl;
    }
};