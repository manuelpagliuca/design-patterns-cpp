#pragma once

#include <string>

class Mediator
{
public:
	virtual void sendMessage(const std::string& message, class Colleague* colleague) const = 0;
};