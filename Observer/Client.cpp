#include "Subject.h"
#include "ConcreteObserver.h"

int main() {
	Subject subject;

	ConcreteObserver observer1("Observer1");
	ConcreteObserver observer2("Observer2");

	subject.addObserver(&observer1);
	subject.addObserver(&observer2);

	subject.setState("New State 1");

	subject.removeObserver(&observer2);

	subject.setState("New State 2");

	return 0;
}