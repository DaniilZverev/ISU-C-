#pragma once
#include "Figure.h"
#include"Point.h"
#include <ostream>
#include <fstream>

class Circle : public Figure {
private:
	double radius;
	Point center;
public:
	Circle(double radius);
	Circle(Point& center, double radius);
	~Circle();
	double getPerimetr();
	double getSquare();
	std::string printClass();
	friend std::fstream& operator>>(std::fstream& in, Circle& circle);
	friend std::ostream& operator<<(std::ostream& out, Circle& circle);
};
