#pragma once

#include <string>

class Memento
{
private:
	std::string state;

public:
	Memento(const std::string& s) : state(s) {}

	std::string getState() const
	{
		return state;
	}
};