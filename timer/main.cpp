#include <iostream>
#include "Time.h"
#include <math.h>

int main() {
	Time t1, t2, tsum;
	t1.setSeconds(15);
	t1.refactorTime();
	t1.printTime();
	t2.setSeconds(20);
	tsum = t1 + t2;
	tsum.printTime();
	tsum += t1;
	tsum.printTime();
	return 0;
}
