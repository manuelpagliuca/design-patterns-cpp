#pragma once

#include "Context.h"
#include "Expression.h"

class AndExpression : public Expression
{
public:
	AndExpression(Expression* left, Expression* right) : leftOperand(left), rightOperand(right) {}

	bool interpret(Context& context) const override
	{
		return leftOperand->interpret(context) && rightOperand->interpret(context);
	}

private:
	Expression* leftOperand;
	Expression* rightOperand;
};