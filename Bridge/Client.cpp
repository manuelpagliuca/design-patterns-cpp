#include "RefinedAbstractionA.h"
#include "RefinedAbstractionB.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

int main()
{
	Implementor* implA = new ConcreteImplementorA();
	Implementor* implB = new ConcreteImplementorB();

	Abstraction* abstractionAA = new RefinedAbstractionA(implA);
	Abstraction* abstractionAB = new RefinedAbstractionA(implB);

	abstractionAA->operation();
	abstractionAB->operation();

	Abstraction* abstractionBA = new RefinedAbstractionB(implA);
	Abstraction* abstractionBB = new RefinedAbstractionB(implB);

	abstractionBA->operation();
	abstractionBB->operation();

	delete implA;
	delete implB;
	delete abstractionAA;
	delete abstractionAB;
	delete abstractionBA;
	delete abstractionBB;

	return 0;
}