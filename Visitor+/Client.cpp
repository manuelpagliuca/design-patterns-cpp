#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor.h"

int main() {
    ConcreteElementA elementA;
    ConcreteElementB elementB;

    ConcreteVisitor visitor;

    elementA.accept(visitor);
    elementB.accept(visitor);

    return 0;
}