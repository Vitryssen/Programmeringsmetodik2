#include "shape.h"

Shape::Shape(std::string color): color(color)
{
}

std::string Shape::getColor() const
{
	return color;
}
