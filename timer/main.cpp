#include <iostream>
#include "Time.h"
#include <math.h>

int main() {
	Time t1, t2;
	t1.setHours(1);
	t2.setSeconds(3444);
	std::cout << "T1: ";
	t1.printTime();
	std::cout << "\nT2: ";
	t2.printTime();

	if (t1 != t2) {
		printf("\n\nisNotEqual ? True\n");
	}
	else printf("isNotEqual ? False \n");
	if (t1 == t2) {
		printf("isEqual ? True \n");
	}
	else printf("isEqual ? False\n");
	if (t1 > t2) {
		printf("t1isBigger ? True\n");
	}
	else printf("t1IsBigger ? False\n");
	if (t1 < t2) {
		printf("t1isSmaller ? True\n");
	}
	else printf("t1isSmaller ? False\n");
}
