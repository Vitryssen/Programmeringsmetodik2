#pragma once
#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H
#include "rectangle.h"
class Parallelepiped : public Rectangle {
private:
	double length;
public:
	Parallelepiped(std::string color, double width, double height, double length);
	double getArea() const;
};
#endif // !PARALLELEPIPED_H