#pragma once
#include "Figure.h"
#include "Point.h"

class Triangle : public Figure {
private:
	double a, b, c;
public:
	Triangle(double a, double b, double c);
	Triangle(Point* arr);
	double getPerimetr();
	double getSquare();
	std::string printClass();
	~Triangle(); 
	friend std::ostream& operator<<(std::ostream& out, Triangle& triangle);
	friend std::fstream& operator>>(std::fstream& in, Triangle& triangle);
};
