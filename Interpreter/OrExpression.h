#pragma once

#include "Expression.h"

class OrExpression : public Expression
{
public:
    OrExpression(Expression* left, Expression* right) : leftOperand(left), rightOperand(right) {}

    bool interpret(Context& context) const override 
    {
        return leftOperand->interpret(context) || rightOperand->interpret(context);
    }

private:
    Expression* leftOperand;
    Expression* rightOperand;
};