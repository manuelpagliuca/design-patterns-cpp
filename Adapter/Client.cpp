#include "Adapter.h"

void clientCode(Target* target)
{
	target->request();
}

int main()
{
	Adaptee* adaptee = new Adaptee();
	Target* adapter = new Adapter(adaptee);

	clientCode(adapter);

	delete adaptee;
	delete adapter;

	return 0;
}