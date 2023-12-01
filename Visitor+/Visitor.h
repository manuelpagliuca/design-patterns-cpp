#pragma once

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
    virtual void visit(ConcreteElementA& element) = 0;
    virtual void visit(ConcreteElementB& element) = 0;
    virtual ~Visitor() = default;
};