#pragma once

#include <memory>
#include "State.h"

class Context
{
private:
    std::shared_ptr<State> currentState;

public:
    void setState(std::shared_ptr<State> state) 
    {
        currentState = state;
    }

    void request() 
    {
        currentState->handle(*this);
    }
};