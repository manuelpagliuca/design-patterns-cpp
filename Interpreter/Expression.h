#pragma once

class Context;

class Expression
{
public:
	virtual bool interpret(Context& context) const = 0;
	virtual ~Expression() = default;
};