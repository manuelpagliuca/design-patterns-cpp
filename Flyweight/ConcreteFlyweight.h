#pragma once

#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight {
private:
	std::string intrinsicState;

public:
	ConcreteFlyweight(const std::string& intrinsicState) : intrinsicState(intrinsicState) {}

	void operation(const std::string& extrinsicState) const override
	{
		std::cout
			<< "ConcreteFlyweight with Intrinsic State: " << intrinsicState
			<< " and Extrinsic State: " << extrinsicState
			<< std::endl;
	}
};