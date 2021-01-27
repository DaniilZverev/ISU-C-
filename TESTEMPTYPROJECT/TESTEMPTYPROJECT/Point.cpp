#include "Point.h"

Point::Point() {}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}


Point::~Point() {
}

int Point::getX() const { return x; }

int Point::getY() const { return y; }

Point Point::operator +(Point& coords) {
	Point new_point = Point(this->getX() + coords.getX(), this->getY() + coords.getY());
	return new_point;
}

Point Point::operator -(Point& coords) {
	Point new_point = Point(this->getX() - coords.getX(), this->getY() - coords.getY());
	return new_point;
}

std::fstream& operator>>(std::fstream& in, Point point) {
	in >> point.x >> point.y;
	return in;
}

std::ostream& operator<<(std::ostream& out, Point point) {
	out << "X: " << point.getX() << " Y: " << point.getY();
	return out;
}
