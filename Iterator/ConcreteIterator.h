#pragma once

#include "Iterator.h"

template <typename T>
class ConcreteAggregate;

template <typename T>
class ConcreteIterator : public Iterator<T>
{
private:
	const ConcreteAggregate<T>* aggregate;
	int currentIndex;

public:
	ConcreteIterator(const ConcreteAggregate<T>* agg) : aggregate(agg), currentIndex(0) {}

	T getNext() override
	{
		if (hasNext())
		{
			return aggregate->getElement(currentIndex++);
		}
		else
		{
			throw std::out_of_range("Index out of range");
		}
	}

	bool hasNext() override
	{
		return currentIndex < aggregate->getSize();
	}
};