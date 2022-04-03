#include <iostream>
#include "Time.h"
#include "Harmonogram.h"
#include <math.h>

Harmonogram firstN(Harmonogram& _old, int n);
Harmonogram withinSum(Harmonogram& _old, Time sum);

int main() {
	Time t1, t2;
	t1.setSeconds(352);
	t2.setSeconds(5);

	Harmonogram h1, h2, h3;
	h1.add(t1);
	h1.add(t2);
	h1.add(543);
	h1.add(54555);
	h1.add(54555);
	h1.add(54555);
	h1.add(54555);
	h1.add(54555);
	h1.add(54555);
	h1.add(54555);
	h1.add(54555);

	//h2 = firstN(h1, 7);

	//h2.printAll();
}

Harmonogram firstN(Harmonogram& _old, int n) {
	Harmonogram newHarmonogram(_old);

	while (newHarmonogram.count() > n) {
		newHarmonogram.pop();
	}

	return newHarmonogram;
}