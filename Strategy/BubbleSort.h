#pragma once

#include <iostream>
#include "SortingStrategy.h"

class BubbleSort : public SortingStrategy {
public:
    void sort() const override
    {
        std::cout << "Sorting using Bubble Sort." << std::endl;
        // implementation
    }
};