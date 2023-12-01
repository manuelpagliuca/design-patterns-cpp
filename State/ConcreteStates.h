#pragma once

#include <iostream>
#include "State.h"
#include "Context.h"

class ConcreteStateA : public State
{
public:
	void handle(Context& context) override;
};

class ConcreteStateB : public State
{
public:
	void handle(Context& context) override;
};