#pragma once
#include "Polynom.h"
class Parabola : Polynom {
private:
	using Polynom::coefficients;
	using Polynom::powers;
	using Polynom::interval_start;
	using Polynom::interval_end;
public:
	using Polynom::setInterval;
	Parabola();
	Parabola(vector<double>& coefficients);
	using Polynom::F;
	using Polynom::getMax;
	using Polynom::getMin;
	~Parabola();
};

