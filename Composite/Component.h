#pragma once
#include <iostream>
#include <vector>

class Component
{
public:
	virtual void operation() const = 0;
	virtual ~Component() = default;
};