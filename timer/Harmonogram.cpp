#include <iostream>
#include "Harmonogram.h"

void Harmonogram::expand() {
	capacity *= 2;

	Time* temp = new Time[capacity];

	for (int i = 0; i < numOfElements; i++) {
		temp[i] = timesArray[i];
	}

	delete[] timesArray;

	timesArray = temp;
	delete[] temp;
	initialize(numOfElements);
}

void Harmonogram::initialize(int from) {
	for (int i = from; i < capacity; i++) {
		timesArray = 0;
	}
}

void Harmonogram::add(Time time) {
	if (numOfElements >= capacity) {
		expand();
	}
	timesArray[numOfElements++] = time;
}

Time Harmonogram::getAt(int index) {
	try {
		if (index < 0 || index >= numOfElements) {
			throw 1;
		}
	}
	catch (int exception) {
		std::cout << "Error: couldn't get time from index " << index << ". No object on provided index.\n";
	}
	return timesArray[index];
}