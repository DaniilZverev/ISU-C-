#pragma once
#include "Function.h"

class Polynom : public Function {
private:
	using Function::interval_start;
	using Function::interval_end;
	vector<double> coefficients;
	vector<double> powers;
	Polynom();
public:
	using Function::setInterval;
	Polynom(vector<double>& coefficients);
	double F(double x);
	string getMax();
	string getMin();
	~Polynom();
	friend class Parabola;
};

