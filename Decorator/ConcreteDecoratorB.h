#pragma once

#include <iostream>
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
	ConcreteDecoratorB(std::shared_ptr<Component> comp) : Decorator(comp) {}

	void addedBehavior() const {
		std::cout << "New Behaviour B" << std::endl;
	}

	void operation() const override {
		Decorator::operation();
		addedBehavior();
	}
};