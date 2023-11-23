#include "FlyweightFactory.h"

int main() {
    FlyweightFactory flyweightFactory;

    Flyweight* flyweight1 = flyweightFactory.getFlyweight("shared");
    flyweight1->operation("state1");

    Flyweight* flyweight2 = flyweightFactory.getFlyweight("shared");
    flyweight2->operation("state2"); // Different operation but same object

    Flyweight* flyweight3 = flyweightFactory.getFlyweight("another");
    flyweight3->operation("state3");

    return 0;
}