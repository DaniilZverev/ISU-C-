#include "Parabola.h"



Parabola::Parabola() {
	coefficients.push_back(1);
	coefficients.push_back(0);
	coefficients.push_back(0);
	powers.push_back(2);
	powers.push_back(1);
	powers.push_back(0);
}

Parabola::Parabola(vector<double>& coefficients) {
	int power = 2;
	for (int i = 0; i < 3; i++) {
		this->coefficients.push_back(coefficients.at(i));
		powers.push_back(power);
		power--;
	}
}

Parabola::~Parabola() {
}
