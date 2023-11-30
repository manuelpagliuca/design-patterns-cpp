#pragma once

#include <string>
#include "Mediator.h"

class Colleague 
{
protected:
    Mediator* mediator;

public:
    Colleague(Mediator* m) : mediator(m) {}

    virtual void sendMessage(const std::string& message) = 0;
    virtual void receiveMessage(const std::string& message) const = 0;
};