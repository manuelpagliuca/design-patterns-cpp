#include "Composite.h"
#include "Leaf.h"

int main()
{
	Leaf* leaf1 = new Leaf();
	Leaf* leaf2 = new Leaf();
	Leaf* leaf3 = new Leaf();

	Composite* composite = new Composite();
	composite->add(leaf1);
	composite->add(leaf2);

	Composite* composite2 = new Composite();
	composite2->add(leaf3);

	composite->add(composite2);

	composite->operation();

	delete composite;

	return 0;
}