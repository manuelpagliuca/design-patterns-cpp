#include "SquareFactory.h"

Shape* SquareFactory::createShape()
{
    return new Square();
}
