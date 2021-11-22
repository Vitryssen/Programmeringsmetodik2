#pragma once
#ifndef ROUNDED_RECTANGLE_H
#define ROUNDED_RECTANGLE_H
#include "rectangle.h"
#include "circle.h"
class RoundedRectange : public Rectangle {
private:
	Circle baseCircle;
public:
	RoundedRectange(std::string color, double width, double height, double radius);
	virtual double getArea() const;
};
#endif // !ROUNDED_RECTANGLE_H