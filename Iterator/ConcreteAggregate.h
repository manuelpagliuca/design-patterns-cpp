#pragma once

#include <vector>
#include "Aggregate.h"
#include "ConcreteIterator.h"

template <typename T>
class ConcreteAggregate : public Aggregate<T>
{
private:
	std::vector<T> elements;

public:
	void addElement(const T& element)
	{
		elements.push_back(element);
	}

	Iterator<T>* createIterator() override
	{
		return new ConcreteIterator<T>(this);
	}

	T getElement(int index) const
	{
		return elements[index];
	}

	int getSize() const
	{
		return elements.size();
	}
};