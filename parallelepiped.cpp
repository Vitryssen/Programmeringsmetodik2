#include "parallelepiped.h"

Parallelepiped::Parallelepiped(std::string color, double width, double height, double length) : Rectangle(color, width, height), length(length)
{
}

double Parallelepiped::getArea() const
{
	return Rectangle::getArea()* length;
}
