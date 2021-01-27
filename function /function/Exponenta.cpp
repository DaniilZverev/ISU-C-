#include "Exponenta.h"



Exponenta::Exponenta(double exp_coeff, double power, double free_const) {
	if (exp_coeff == 0) {
		cout << "Please enter coefficient, different from zero";
		return;
	}
	this->exp_coeff = exp_coeff;
	this->power = power;
	this->free_const = free_const;
}

double Exponenta::F() {
	return exp(power) + free_const;
}

double Exponenta::F(double x) {
	return exp(x) + free_const;
}

string Exponenta::getMax() {
	if (power > 1 && exp_coeff > 0 || power < 1 && exp_coeff < 0) {
		return to_string(this->F(interval_end));
	} else if (power < 1 && exp_coeff > 0 || power > 1 && exp_coeff < 0) {
		return to_string(this->F(interval_start));
	} else {
		return to_string(exp(1));
	}
}

string Exponenta::getMin() {
	if (power > 1 && exp_coeff > 0 || power < 1 && exp_coeff < 0) {
		return to_string(this->F(interval_start));
	} else if (power < 1 && exp_coeff > 0 || power > 1 && exp_coeff < 0) {
		return to_string(this->F(interval_end));
	}
}


Exponenta::~Exponenta() {
}
