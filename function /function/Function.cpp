#include "Function.h"

Function::~Function() {

}

void Function::setInterval(double start, double end) {
	if (start == end) {
		cout << "Start of the interval cannot be equal to its end!";
		return;
	}
	if (end < start) {
		interval_start = end;
		interval_end = start;
	}
	else {
		interval_start = start;
		interval_end = end;
	}
}


