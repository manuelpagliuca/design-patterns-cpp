#pragma once

#include <iostream>
#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

class ConcreteVisitor : public Visitor
{
public:
	void visit(ConcreteElementA& element) override
	{
		std::cout << "ConcreteVisitor visits ConcreteElementA." << std::endl;
		element.operationA();
	}

	void visit(ConcreteElementB& element) override
	{
		std::cout << "ConcreteVisitor visits ConcreteElementB." << std::endl;
		element.operationB();
	}
};