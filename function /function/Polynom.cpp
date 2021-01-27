#include "Polynom.h"



Polynom::Polynom() {}

Polynom::Polynom(vector<double>& coefficients) {
	int counter = coefficients.size() - 1;
	for (int i = 0; i < coefficients.size(); i++) {
		this->coefficients.push_back(coefficients.at(i));
		powers.push_back(counter);
		counter--;
	}
}

double Polynom::F(double x) {
	double result = 0;
	for (int i = 0; i < coefficients.size(); i++) {
		result += coefficients.at(i) * pow(x, powers.at(i));
	}
	return result;
}

string Polynom::getMax() {
	double max = DBL_MIN;
	for (double i = interval_start; i <= interval_end; i += 0.001) {
		if (this->F(i) > max) max = this->F(i);
	};
	return to_string(max);
}

string Polynom::getMin() {
	double min = DBL_MAX;
	for (double i = interval_start; i <= interval_end; i += 0.001) {
		if (this->F(i) < min) min = this->F(i);
	}
	return to_string(min);
}


Polynom::~Polynom() {
}
