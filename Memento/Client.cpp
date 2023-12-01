#include "Originator.h"
#include "Caretaker.h"

int main() 
{
    Originator originator;
    Caretaker caretaker;

    originator.setState("State 1");
    originator.displayState();

    caretaker.addMemento(originator.createMemento());

    originator.setState("State 2");
    originator.displayState();

    caretaker.addMemento(originator.createMemento());

    originator.restoreMemento(caretaker.getMemento(0));
    originator.displayState();

    return 0;
}