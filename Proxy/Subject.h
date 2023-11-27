#pragma once

class Subject
{
public:
    virtual void request() const = 0;
    virtual ~Subject() = default;
};