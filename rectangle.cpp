#include "rectangle.h"
#include "shape.h"
Rectangle::Rectangle(std::string color, double width, double height): Shape(color), width(width), height(height)
{
}

double Rectangle::getArea() const
{
	return height * width;
}
