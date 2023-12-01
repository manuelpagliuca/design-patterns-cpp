#pragma once

#include <iostream>
#include "Memento.h"

class Originator
{
private:
	std::string state;

public:
	void setState(const std::string& s)
	{
		state = s;
	}

	Memento createMemento() const
	{
		return Memento(state);
	}

	void restoreMemento(const Memento& m)
	{
		state = m.getState();
	}

	void displayState() const
	{
		std::cout << "Current State: " << state << std::endl;
	}
};