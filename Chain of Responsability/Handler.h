#pragma once
#include <string>

class Handler
{
public:
	virtual void handleRequest(const std::string& request) = 0;
	virtual void setNextHandler(Handler* nextHandler) = 0;
};