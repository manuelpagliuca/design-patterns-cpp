#pragma once

#include "Expression.h"

class NotExpression : public Expression
{
public:
	NotExpression(Expression* operand) : expression(operand) {}

	bool interpret(Context& context) const override
	{
		return !expression->interpret(context);
	}

private:
	Expression* expression;
};