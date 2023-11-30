#pragma once

#include "Iterator.h"

template <typename T>
class Aggregate
{
public:
	virtual Iterator<T>* createIterator() = 0;
};