#pragma once
#include "Figure.h"
#include "Point.h"
class Rectangle : public Figure  {
private:
	int a, b;
public:
	Rectangle(double a, double b);
	Rectangle(Point* arr);
	std::string printClass();
	~Rectangle();
	double getPerimetr();
	double getSquare();
};
