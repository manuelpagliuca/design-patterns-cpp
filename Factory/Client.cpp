#include <iostream>
#include "ConcreteCreator.h"

int main() {
    Creator* creator = new ConcreteCreator();

    Product* p1 = creator->createProductA();
    std::cout << "Product: " << p1->getName() << std::endl;
    creator->removeProduct(p1);

    Product* p2 = creator->createProductB();
    std::cout << "Product: " << p2->getName() << std::endl;
    creator->removeProduct(p2);

    delete creator;

    return 0;
}