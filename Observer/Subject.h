#pragma once

#include <vector>
#include "Observer.h"

class Subject
{
private:
    std::vector<Observer*> observers;
    std::string state;

public:
    void addObserver(Observer* observer) 
    {
        observers.push_back(observer);
    }

    void removeObserver(Observer* observer) 
    {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void setState(const std::string& newState)
    {
        state = newState;
        notifyObservers();
    }

    const std::string& getState() const 
    {
        return state;
    }

    void notifyObservers() {
        for (Observer* observer : observers) 
        {
            observer->update(state);
        }
    }
};