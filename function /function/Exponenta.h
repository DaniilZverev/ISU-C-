#pragma once
#include "Function.h"

class Exponenta : public Function {
public:
	double exp_coeff;
	double power;
	double free_const;
	using Function::interval_start;
	using Function::interval_end;
	double F(double x);
public:
	using Function::setInterval;
	Exponenta(double exp_coeff = 1, double power = 1, double free_const = 0);
	double F();
	string getMax();
	string getMin();
	~Exponenta();
};

