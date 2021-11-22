#include "cylinder.h"
#include "circle.h"
Cylinder::Cylinder(std::string color, double radius, double height) : Circle(color, radius), height(height)
{
}

double Cylinder::getArea() const
{
	//return Circle::getArea() * height; //volume
	return 2 * Circle::getPi() * Circle::getRadius() * height + 2 * Circle::getPi() * pow(Circle::getRadius(), 2); //surface area
}
