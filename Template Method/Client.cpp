#include "AbstractAlgorithm.h"
#include "ConcreteAlgorithmA.h"
#include "ConcreteAlgorithmB.h"

int main()
{
	AbstractAlgorithm* algorithmA = new ConcreteAlgorithmA();
	algorithmA->executeAlgorithm();
	delete algorithmA;

	std::cout << "-----------------------" << std::endl;

	AbstractAlgorithm* algorithmB = new ConcreteAlgorithmB();
	algorithmB->executeAlgorithm();
	delete algorithmB;

	return 0;
}