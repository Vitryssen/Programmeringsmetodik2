#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include <string>
class Rectangle : public Shape {
private:
	double width;
	double height;
public:
	Rectangle(std::string color, double width, double height);
	virtual double getArea() const;
};
#endif // !RECTANGLE_H