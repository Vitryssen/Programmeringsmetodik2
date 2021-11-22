#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <typeinfo>
class Shape {
private:
	std::string color;
	std::string shapeName = typeid(Shape).name();
public:
	Shape(std::string color);
	std::string getColor() const;
	virtual double getArea() const = 0;
};
#endif // !SHAPE_H