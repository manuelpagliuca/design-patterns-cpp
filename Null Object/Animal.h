#pragma once

class Animal
{
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() = default;
};