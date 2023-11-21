#include "AbstractFactory.h"
#include "CircleFactory.h"
#include "SquareFactory.h"

int main() {
	AbstractFactory* circleFactory = new CircleFactory();
	Shape* circle = circleFactory->createShape();
	circle->draw();
	delete circle;
	delete circleFactory;

	AbstractFactory* squareFactory = new SquareFactory();
	Shape* square = squareFactory->createShape();
	square->draw();
	delete square;
	delete squareFactory;

	return 0;
}