#pragma once

#include <iostream>
#include <vector>
#include "Memento.h"

class Caretaker
{
private:
	std::vector<Memento> mementos;

public:
	void addMemento(const Memento& m)
	{
		mementos.push_back(m);
	}

	Memento getMemento(int index) const
	{
		if (index >= 0 && index < mementos.size())
		{
			return mementos[index];
		}

		throw std::out_of_range("Invalid index");
	}
};