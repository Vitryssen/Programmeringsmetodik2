#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
private:
	double diameter;
public:
	Circle() = delete;
	Circle(double diameter);
	
	virtual double GetArea() const;
	double GetRadius() const;
};
#endif // !CIRCLE_H