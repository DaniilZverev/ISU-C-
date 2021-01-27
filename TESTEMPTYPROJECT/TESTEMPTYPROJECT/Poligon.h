#pragma once
#include "Figure.h"
#include "Point.h"

class Poligon : public Figure{
private:
	Point* polygon_points;
	int angles;
public:
	Poligon(Point* arr, int angles);
	~Poligon();
	std::string printClass();
	double getPerimetr();
	double getSquare();
	/*friend std::fstream& operator>>(std::fstream& in, Poligon& polygon);*/
	friend std::ostream& operator<<(std::ostream& out, Poligon& polygon);
};
