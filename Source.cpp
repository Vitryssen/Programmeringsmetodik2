#include <iostream>
#include <array>
#include <vector>
#include "circle.h"
#include "cylinder.h"
#include "parallelepiped.h"
#include "rectangle.h"
#include "roundedrectangle.h"
#include "shape.h"
void getData(std::vector<Shape*> shapes);
int main() {
	std::vector<Shape*> allShapes = {
		new Circle("black", 2.2),
		new Cylinder("yellow", 2.2, 2.2),
		new Parallelepiped("orange", 2.2, 2.2, 2.2),
		new Rectangle("purple", 2.2, 2.2),
		new RoundedRectange("green", 2.2, 2.2, 2.2)
	};
	getData(allShapes);
	return 0;
}
void getData(std::vector<Shape*> shapes) {
	double area = 0;
	for (auto& item : shapes) {
		area += item->getArea();
		std::cout << "Color: " << item->getColor() << " & Area: " << item->getArea() << std::endl;
	}
	std::cout << "Total area: " << area << std::endl;
}