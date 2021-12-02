#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
#include "shape.h"
#include <string>
class Cylinder : public Shape{
private:
	Circle baseCircle;
	double height;
public:
	Cylinder(std::string color, double radius, double height);
	double getArea() const;
};
#endif // !CYLINDER_H