#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
class Circle : public Shape{
private:
	double radius;
public:
	Circle() = delete;
	Circle(std::string color, double radius);
	double getRadius() const;
	double getPi() const;
	virtual double getArea() const;
};
#endif // !CIRCLE_H