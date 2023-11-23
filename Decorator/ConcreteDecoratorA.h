#pragma once

#include <iostream>
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
	ConcreteDecoratorA(std::shared_ptr<Component> comp) : Decorator(comp) {}

	void addedBehavior() const {
		std::cout << "New Behaviour A" << std::endl;
	}

	void operation() const override {
		Decorator::operation();
		addedBehavior();
	}
};