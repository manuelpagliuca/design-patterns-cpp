#pragma once

#include "Handler.h"
#include <iostream>
#include <string>

class ConcreteHandlerA : public Handler
{
private:
	Handler* nextHandler;
public:
	ConcreteHandlerA() : nextHandler(nullptr) {}

	void handleRequest(const std::string& request) override
	{
		if (request == "A")
		{
			std::cout << "Handler A handling the request." << std::endl;
		}
		else if (nextHandler != nullptr)
		{
			std::cout << "Handler A passing the request to the next handler." << std::endl;
			nextHandler->handleRequest(request);
		}
		else
		{
			std::cout << "Handler A cannot handle the request." << std::endl;
		}
	}

	void setNextHandler(Handler* nextHandler) override
	{
		this->nextHandler = nextHandler;
	}
};