#pragma once

#include <iostream>
#include "AbstractAlgorithm.h"

class ConcreteAlgorithmA : public AbstractAlgorithm
{
private:
	void step1() override
	{
		std::cout << "ConcreteAlgorithmA - Step 1" << std::endl;
	}

	void step2() override
	{
		std::cout << "ConcreteAlgorithmA - Step 2" << std::endl;
	}

	void step3() override
	{
		std::cout << "ConcreteAlgorithmA - Step 3" << std::endl;
	}
};