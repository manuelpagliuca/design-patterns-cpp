#pragma once

// Interface that defines how the default implementation should be.
class Implementor
{
public:
	virtual void operationImpl() const = 0;
};