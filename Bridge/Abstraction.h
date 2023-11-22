#pragma once
#include "Implementor.h"

// This interface works as bridge betweeen abstraction and implementation.
class Abstraction
{
protected:
	Implementor* implementor;

public:
	Abstraction(Implementor* impl) : implementor(impl) {}
	virtual void operation() const = 0;
};