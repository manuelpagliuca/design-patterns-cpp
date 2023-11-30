#include <iostream>
#include "ConcreteAggregate.h"
#include "Iterator.h"

int main()
{
	ConcreteAggregate<int> aggregate;
	aggregate.addElement(1);
	aggregate.addElement(2);
	aggregate.addElement(3);

	Iterator<int>* iterator = aggregate.createIterator();

	while (iterator->hasNext())
	{
		std::cout << iterator->getNext() << " ";
	}

	delete iterator;

	return 0;
}