#include <iostream>
#include "ConcreteBuilderX.h"
#include "ConcreteBuilderY.h"

int main()
{
	Builder* builder = new ConcreteBuilderX();
	builder->buildPartA();
	builder->buildPartB();
	builder->buildPartC();
	Product product1 = builder->get();

	std::cout << "1st product parts: " << product1.get_all_parts() << std::endl;

	delete builder;

	builder = new ConcreteBuilderY();
	builder->buildPartA();
	builder->buildPartB();
	builder->buildPartC();

	Product product2 = builder->get();
	std::cout << "2nd product parts: " << product2.get_all_parts() << std::endl;
	delete builder;

	return 0;
}