#include "Hyperbola.h"



Hyperbola::Hyperbola(double numerator, double denominator_coeff, double denominator_const, double free_const) {
	if (denominator_coeff == 0) {
		cout << "Denominator cannot be equal to zero!";
		return;
	}
	this->numerator = numerator;
	this->denominator_coeff = denominator_coeff;
	this->denominator_const = denominator_const;
	this->free_const = free_const;
}

double Hyperbola::F(double x) {
	if (x + denominator_const == 0); // TODO make an exception
	return numerator / (denominator_coeff * (x + denominator_const)) + free_const;
}

string Hyperbola::getMax() {
	if (interval_start == NULL && interval_end == NULL) {
		cout << "First of all you have to set interval range!";
		return "";
	} 
	if (interval_start < -denominator_const && interval_end > -denominator_const) return "There are neither maximum nor minimum on this interval!";
	if (interval_start == -denominator_const || interval_end == -denominator_const) return "Positive infinity";
	return this->F(interval_start) > this->F(interval_end) ? to_string(this->F(interval_start) + free_const) : to_string(this->F(interval_end) + free_const);
}

string Hyperbola::getMin() {
	if (interval_start == NULL && interval_end == NULL) {
		cout << "First of all you have to set interval range!";
		return "";
	}
	if (interval_start < -denominator_const && interval_end > -denominator_const) return "There are neither maximum nor minimum on this interval!";
	if (interval_start == -denominator_const || interval_end == -denominator_const) return "Negative infinity";
	return this->F(interval_start) < this->F(interval_end) ? to_string(this->F(interval_start) + free_const) : to_string(this->F(interval_end) + free_const);
}

Hyperbola::~Hyperbola() {
}
