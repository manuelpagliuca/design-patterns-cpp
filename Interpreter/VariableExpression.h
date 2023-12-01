#pragma once

#include <string>
#include "Context.h"
#include "Expression.h"

class VariableExpression : public Expression
{
public:
	VariableExpression(const std::string& name) : variableName(name) {}

	bool interpret(Context& context) const override
	{
		return context.getVariable(variableName);
	}

private:
	std::string variableName;
};