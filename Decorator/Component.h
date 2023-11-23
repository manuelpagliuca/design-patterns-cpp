#pragma once

#include "Component.h"

class Component
{
public:
	virtual void operation() const = 0;
	virtual ~Component() = default;
};