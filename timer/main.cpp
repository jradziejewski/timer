#include <iostream>
#include "Time.h"
#include <math.h>

int main() {
	Time t1;
	t1.setSeconds(654354300);
	t1.refactorTime();
	t1.printTime();
	return 0;
}