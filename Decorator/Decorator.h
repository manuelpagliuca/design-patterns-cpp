#pragma once

#include <memory>
#include "Component.h"

class Decorator : public Component
{
protected:
	std::shared_ptr<Component> component;

public:
	Decorator(std::shared_ptr<Component> comp) : component(comp) {}

	void operation() const override
	{
		if (component) {
			component->operation();
		}
	}
};