#pragma once
#include <iostream>
#include <ostream>
#include <fstream>

class Point {
private:
	int x, y;
public:
	Point();
	Point(int x, int y);
	~Point();
	int getX() const;
	int getY() const;
	friend std::fstream& operator>>(std::fstream& in, Point point);
	friend std::ostream& operator<<(std::ostream& out, Point point);
	Point operator +(Point& coords);
	Point operator -(Point& coords);
};

