#include "Handler.h"
#include "ConcreteHandlerA.h"
#include "ConcreteHandlerB.h"

int main()
{
	Handler* handlerA = new ConcreteHandlerA();
	Handler* handlerB = new ConcreteHandlerB();

	handlerA->setNextHandler(handlerB);

	handlerA->handleRequest("A");
	handlerA->handleRequest("B");
	handlerA->handleRequest("C");

	delete handlerA;
	delete handlerB;

	return 0;
}