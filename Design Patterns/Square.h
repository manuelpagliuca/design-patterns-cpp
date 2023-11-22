#pragma once
#include "Shape.h"
#include <iostream>

class Square : public Shape {
public:
    void draw() override
    {
        std::cout << "Drawing a Square" << std::endl;
    }
};
