#pragma once

class SortingStrategy {
public:
    virtual void sort() const = 0;
    virtual ~SortingStrategy() = default;
};