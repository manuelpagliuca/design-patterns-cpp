#pragma once

#include <iostream>
#include "Colleague.h"
#include "Mediator.h"
#include "ConcreteColleague.h"

class ConcreteColleague : public Colleague 
{
public:
    ConcreteColleague(Mediator* m) : Colleague(m) {}

    void sendMessage(const std::string& message) override 
    {
        mediator->sendMessage(message, this);
    }

    void receiveMessage(const std::string& message) const override 
    {
        std::cout << "Colleague received message: " << message << std::endl;
    }
};
