#pragma once

class Context;

class State
{
public:
	virtual void handle(Context& context) = 0;
};