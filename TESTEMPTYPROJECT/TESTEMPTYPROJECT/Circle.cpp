#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "Point.h"


Circle::Circle(double radius) {
	this->radius = radius;
	this->center = Point(0, 0);
}

Circle::Circle(Point& center, double radius) {
	this->center = center;
	this->radius = radius;
}


Circle::~Circle() {
	/*delete &center;*/
}

double Circle::getPerimetr() {
	return 2 * M_PI * radius;
}

double Circle::getSquare() {
	return M_PI * radius * radius;

}

std::string Circle::printClass() {
	return "Circle";
}

std::fstream & operator>>(std::fstream & in, Circle & circle)
{
	in >> circle.radius;
	return in;
}

std::ostream & operator<<(std::ostream & out, Circle & circle)
{
	out << "Радиус круга: " << circle.radius << ", центр: " << "(" << circle.center;
	return out;
}
