#include "QuickPow.h"



QuickPow::QuickPow() {
}


QuickPow::~QuickPow() {
}

int QuickPow::getPower(int num, int power) {
	if (power == 0)
		return 1;
	if (power % 2 != 0)
		return getPower(num, power - 1) * num;
	else {
		return getPower(num * num, power / 2);;
	}
}
