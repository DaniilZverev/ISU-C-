#pragma once
#include <iostream>
#include <float.h>
#include <string>
#include <vector>
using namespace std;
class Function {
private:
	double interval_start = NULL;
	double interval_end = NULL;
public:
	virtual ~Function();
	virtual double F(double x) = 0;
	void setInterval(double start, double end);
	virtual string getMax() = 0;
	virtual string getMin() = 0;
	friend class Hyperbola;
	friend class Parabola;
	friend class Exponenta;
	friend class Polynom;
};

