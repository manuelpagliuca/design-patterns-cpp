#include "ConcreteMediator.h"
#include "ConcreteColleague.h"

int main() {
    ConcreteMediator mediator;

    ConcreteColleague colleague1(&mediator);
    ConcreteColleague colleague2(&mediator);

    mediator.setColleagues(&colleague1, &colleague2);

    colleague1.sendMessage("Hello from colleague1!");
    colleague2.sendMessage("Hi from colleague2!");

    return 0;
}