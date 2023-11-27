#pragma once

#include "Handler.h"
#include <iostream>
#include <string>

class ConcreteHandlerB : public Handler
{
private:
	Handler* nextHandler;
public:
	ConcreteHandlerB() : nextHandler(nullptr) {}

	void handleRequest(const std::string& request) override
	{
		if (request == "A")
		{
			std::cout << "Handler B handling the request." << std::endl;
		}
		else if (nextHandler != nullptr)
		{
			std::cout << "Handler B passing the request to the next handler." << std::endl;
			nextHandler->handleRequest(request);
		}
		else
		{
			std::cout << "Handler B cannot handle the request." << std::endl;
		}
	}

	void setNextHandler(Handler* nextHandler) override
	{
		this->nextHandler = nextHandler;
	}
};