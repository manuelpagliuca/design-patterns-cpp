#pragma once

#include "Target.h"
#include "Adaptee.h"

// Another solution could be to inherit from both.
class Adapter : public Target
{
public:
	Adapter(Adaptee* adaptee) : adaptee(adaptee) {}

	void request() const override
	{
		adaptee->specificRequest();
	}

private:
	Adaptee* adaptee;
	// ...
};