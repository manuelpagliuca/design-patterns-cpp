#include "ConcreteStates.h"

void ConcreteStateA::handle(Context& context)
{
	std::cout << "ConcreteStateA handles the request." << std::endl;
	context.setState(std::make_shared<ConcreteStateB>());
}

void ConcreteStateB::handle(Context& context)
{
	std::cout << "ConcreteStateB handles the request." << std::endl;
	context.setState(std::make_shared<ConcreteStateA>());
}