#include <iostream>
#include "Prototype.h"
#include "ConcretePrototypeA.h"
#include "ConcretePrototypeB.h"

int main()
{
	ConcretePrototypeA* prototypeA = new ConcretePrototypeA();
	ConcretePrototypeB* prototypeB = new ConcretePrototypeB();

	//Prototype* cloneA = prototypeA->clone();
	//Prototype* cloneB = prototypeB->clone();

	//std::cout << cloneA->type() << std::endl;
	//std::cout << cloneB->type() << std::endl;

	//delete cloneA;
	//delete cloneB;

	delete prototypeA;
	delete prototypeB;

	return 0;
}