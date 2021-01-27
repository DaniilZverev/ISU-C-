#pragma once
#include <iostream>
#include <fstream>

class Figure
{
public:
	virtual ~Figure();
	virtual double getSquare() = 0;
	virtual double getPerimetr() = 0;
	virtual std::string printClass() = 0;
	friend std::istream& operator>>(std::istream& is, Figure& figure);
	friend std::ostream& operator<<(std::ostream& out, Figure& figure);
};
