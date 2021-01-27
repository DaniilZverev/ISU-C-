#include <cmath>
#include "Triangle.h"
#include "Point.h"
#include "QuickPow.h"

Triangle::Triangle(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

Triangle::Triangle(Point* arr) {
	a = sqrt(QuickPow::getPower((arr[0] - arr[1]).getX(), 2) + QuickPow::getPower((arr[0] - arr[1]).getY(), 2));
	b = sqrt(QuickPow::getPower((arr[1] - arr[2]).getX(), 2) + QuickPow::getPower((arr[1] - arr[2]).getY(), 2));
	c = sqrt(QuickPow::getPower((arr[2] - arr[0]).getX(), 2) + QuickPow::getPower((arr[2] - arr[0]).getY(), 2));
}

double Triangle::getSquare() {
	double half_perimetr = this->getPerimetr() / 2;
	return sqrt(half_perimetr * (half_perimetr - a) * (half_perimetr - b) * (half_perimetr - c));
}

std::string Triangle::printClass()
{
	return "Triangle";
}

Triangle::~Triangle() {
}

double Triangle::getPerimetr() {
	return a + b + c;
}

std::ostream& operator <<(std::ostream& out, Triangle& triangle) {
	out << "Cтороны треугольника: " << triangle.a << ", " << triangle.b << ", " << triangle.c << "\n";
	return out;
}

std::fstream& operator>>(std::fstream& in, Triangle& triangle)
{
	in >> triangle.a >> triangle.b >> triangle.c;
	return in;
}
