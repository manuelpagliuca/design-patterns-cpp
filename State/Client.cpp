#include "Context.h"
#include "ConcreteStates.h"

int main()
{
    Context context;
    context.setState(std::make_shared<ConcreteStateA>());

    // Requyest will change the state.
    context.request(); // ConcreteStateA handles the request.
    context.request(); // ConcreteStateB handles the request.
    context.request(); // ConcreteStateA handles the request.

    return 0;
}