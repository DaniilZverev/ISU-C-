#include <cmath>
#include "Rectangle.h"
#include "Point.h"
#include "QuickPow.h"

Rectangle::Rectangle(double a, double b) {
	this->a = a;
	this->b = b;
}

Rectangle::Rectangle(Point* arr) {
	a = sqrt(QuickPow::getPower((arr[0] - arr[1]).getX(), 2) + QuickPow::getPower((arr[0] - arr[1]).getY(), 2));
	b = sqrt(QuickPow::getPower((arr[1] - arr[2]).getX(), 2) + QuickPow::getPower((arr[1] - arr[2]).getY(), 2));
}

std::string Rectangle::printClass()
{
	return "Rectangle";
}

Rectangle::~Rectangle() {
}

double Rectangle::getPerimetr() {
	return a * 2 + b * 2;
}

double Rectangle::getSquare() {
	return a * b;
}
