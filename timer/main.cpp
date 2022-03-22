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
	tsum += 765;
	tsum.printTime();
	Time t3, t4;
	t3.setMinutes(900);
	t4.setHours(1);
	t4.setMinutes(839);
	t4.setSeconds(60);
	if (t3 == t4) {
		printf("\nTRUE\n");
	}
	else printf("\nFALSE\n");
	return 0;
}
