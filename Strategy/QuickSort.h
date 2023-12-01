#pragma once

#include <iostream>
#include "SortingStrategy.h"

class QuickSort : public SortingStrategy
{
public:
    void sort() const override
    {
        std::cout << "Sorting using Quick Sort." << std::endl;
        // implementation
    }
};