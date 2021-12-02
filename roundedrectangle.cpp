#include "roundedrectangle.h"
RoundedRectange::RoundedRectange(std::string color, double width, double height, double radius) : Rectangle(color, width, height), baseCircle(color, radius)
{
}

double RoundedRectange::getArea() const
{
	return Rectangle::getArea() - pow(baseCircle.getRadius(), 2) * 4 + baseCircle.getArea();
}
