#include "CircleFactory.h"

Shape* CircleFactory::createShape()
{
    return new Circle();
}