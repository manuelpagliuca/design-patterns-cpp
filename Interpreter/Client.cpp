#include <iostream>
#include "Context.h"
#include "Expression.h"
#include "VariableExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"
#include "NotExpression.h"

int main()
{
    Context context;

    context.setVariable("A", true);
    context.setVariable("B", false);

    Expression* expression = new AndExpression(
        new VariableExpression("A"),
        new OrExpression(
            new VariableExpression("B"),
            new NotExpression(new VariableExpression("A"))
        )
    );

    bool result = expression->interpret(context);

    std::cout << "Result: " << std::boolalpha << result << std::endl;

    delete expression;

    return 0;
}