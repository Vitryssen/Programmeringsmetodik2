#include "circle.h";

Circle::Circle(double diameter) : diameter(diameter)
{
}
double Circle::GetArea() const
{
	return 0.0;
}
double Circle::GetRadius() const{
	return diameter / 2;
}
