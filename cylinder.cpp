#include "cylinder.h"
#include "circle.h"
Cylinder::Cylinder(std::string color, double radius, double height) : baseCircle(color, radius), height(height)
{
}

double Cylinder::getArea() const
{
	//return Circle::getArea() * height; //volume
	return 2 * baseCircle.getPi() * baseCircle.getRadius() * height + 2 * baseCircle.getPi() * pow(baseCircle.getRadius(), 2); //surface area
}
