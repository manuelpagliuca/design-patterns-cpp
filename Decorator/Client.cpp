#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main()
{
	std::shared_ptr<Component> component = std::make_shared<ConcreteComponent>();
	std::shared_ptr<Component> decoratedComponentA = std::make_shared<ConcreteDecoratorA>(component);
	std::shared_ptr<Component> decoratedComponentB = std::make_shared<ConcreteDecoratorB>(decoratedComponentA);

	decoratedComponentB->operation();

	return 0;
}