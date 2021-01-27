#include <iostream>
#include "Function.h"
#include "Hyperbola.h"
#include "Exponenta.h"
#include "Polynom.h"
#include "Parabola.h"

int main(void) {
	Hyperbola h1 = Hyperbola(1, 1, 1, 0);
	h1.setInterval(1, 2);
	/*cout << h1.getMax() << endl;
	cout << h1.getMin() << endl;*/
	Exponenta exp = Exponenta(1, 2);
	exp.setInterval(1, 3);
	/*cout << exp.getMax();*/
	/*Parabola p1 = Parabola(coefficients);*/
	vector<double> coeffs = { 1, 1, 1, 1 };
	Polynom pol = Polynom(coeffs);
	pol.setInterval(-5, 5);
	cout << pol.getMax() << endl;
	cout << pol.getMin() << endl;
	Parabola par = Parabola();
	par.setInterval(-5, 5);
	cout << par.getMax() << endl;
	cout << par.getMin() << endl;
	system("pause");
}