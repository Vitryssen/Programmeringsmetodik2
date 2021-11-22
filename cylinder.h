#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
#include <string>
class Cylinder : public Circle {
private:
	double height;
public:
	Cylinder(std::string color, double radius, double height);
	virtual double getArea() const;
};
#endif // !CYLINDER_H