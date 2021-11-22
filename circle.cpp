#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include "shape.h"
#include "circle.h"

Circle::Circle(std::string color, double radius) : Shape(color), radius(radius)
{
}
double Circle::getArea() const
{
	return M_PI * pow(radius, 2);
}
double Circle::getRadius() const
{
	return radius;
}

double Circle::getPi() const
{
	return M_PI;
}
