#pragma once

#include <unordered_map>
#include <string>

class Context
{
public:
	void setVariable(const std::string& name, bool value)
	{
		variables[name] = value;
	}

	bool getVariable(const std::string& name) const
	{
		if (variables.find(name) != variables.end())
		{
			return variables.at(name);
		}

		return false;  // default value for undefined variables
	}

private:
	std::unordered_map<std::string, bool> variables;
};