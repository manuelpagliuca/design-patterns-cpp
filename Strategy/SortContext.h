#pragma once

#include "SortingStrategy.h"

class SortContext
{
private:
	SortingStrategy* strategy;

public:
	SortContext(SortingStrategy* initialStrategy) : strategy(initialStrategy) {}

	void setStrategy(SortingStrategy* newStrategy)
	{
		strategy = newStrategy;
	}

	void performSort() const
	{
		strategy->sort();
	}
};