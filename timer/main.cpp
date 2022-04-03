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
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h1.add(5);
	h2 = withinSum(h1, 75);

	h2.printAll();
}

Harmonogram firstN(Harmonogram& _old, int n) {
	Harmonogram newHarmonogram(_old);

	while (newHarmonogram.count() > n) {
		newHarmonogram.pop();
	}

	return newHarmonogram;
}

Harmonogram withinSum(Harmonogram& _old, Time sum) {
	Harmonogram newHarmonogram(_old);

	while (newHarmonogram.sumAll() > sum) {
		newHarmonogram.pop();
	}
	return newHarmonogram;
}