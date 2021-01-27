#pragma once
#include "Function.h"

class Hyperbola : public Function {
private:
	double numerator;
	double denominator_coeff;
	double denominator_const;
	double free_const;
	using Function::interval_start;
	using Function::interval_end;
public:
	using Function::setInterval;
	Hyperbola(double numerator = 1, double denominator_coeff = 1, double denominator_const = 0, double free_const = 0);
	double F(double x);
	string getMax();
	string getMin();
	~Hyperbola();
};

