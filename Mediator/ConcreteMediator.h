#pragma once

#include "Colleague.h"
#include "Mediator.h"
#include "ConcreteMediator.h"

class ConcreteMediator : public Mediator
{
private:
	Colleague* colleague1;
	Colleague* colleague2;

public:
	void setColleagues(Colleague* c1, Colleague* c2)
	{
		colleague1 = c1;
		colleague2 = c2;
	}

	void sendMessage(const std::string& message, Colleague* colleague) const override
	{
		if (colleague == colleague1)
		{
			colleague2->receiveMessage(message);
		}
		else if (colleague == colleague2)
		{
			colleague1->receiveMessage(message);
		}
	}
};