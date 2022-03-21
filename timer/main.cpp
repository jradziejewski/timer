#include <iostream>
#include "Time.h"
#include <math.h>

int main() {
	Time t1, t2, tsum;
	t1.setSeconds(1240);
	t2.setSeconds(6451);
	tsum = t1 + t2;
	tsum.printTime();
	return 0;
}