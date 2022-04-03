#include <iostream>
#include "Harmonogram.h"

Harmonogram::Harmonogram() {
	capacity = 10;
	numOfElements = 0;
	timesArray = new Time[capacity];
}

Harmonogram::Harmonogram(Harmonogram& _new) {
	capacity = _new.capacity;
	numOfElements = _new.numOfElements;
	timesArray = new Time[capacity];
	for (int i = 0; i < _new.numOfElements; i++) {
		timesArray[i] = _new.timesArray[i];
	}
}

Harmonogram::~Harmonogram() {
	delete[] timesArray;
}

void Harmonogram::expand() {
	capacity *= 2;

	Time* temp = new Time[capacity];

	for (int i = 0; i < numOfElements; i++) {
		temp[i] = timesArray[i];
	}

	delete[] timesArray;

	timesArray = temp;
	initialize(numOfElements);
}

void Harmonogram::initialize(int from) {
	for (int i = from; i < capacity; i++) {
		timesArray[i] = 0;
	}
}

void Harmonogram::add(Time time) {
	if (numOfElements >= capacity) {
		expand();
	}
	timesArray[numOfElements++] = time;
}

void Harmonogram::incrementAt(int index, int seconds) {
	try {
		if (index < 0 || index >= numOfElements) {
			throw 1;
		}
	}
	catch (int exception) {
		std::cout << "Error: couldn't get time from index " << index << ". No object on provided index.\n";
		return;
	}
	timesArray[index] += seconds;
}

void Harmonogram::pop() {
	if (numOfElements > 0) {
		timesArray[numOfElements] = 0;
	}
	numOfElements--;
}


void Harmonogram::printAll() {
	for (int i = 0; i < numOfElements; i++) {
		std::cout << i + 1 << ". ";
		timesArray[i].printTime();
	}
}

void Harmonogram::clear() {
	while (numOfElements > 0) {
		pop();
	}
}

int Harmonogram::count() {
	return numOfElements;
}

Time Harmonogram::getAt(int index) {
	try {
		if (index < 0 || index >= numOfElements) {
			throw 1;
		}
	}
	catch (int exception) {
		std::cout << "Error: couldn't get time from index " << index << ". No object on provided index.\n";
		return 0;
	}
	return timesArray[index];
}

Time Harmonogram::sumAll() {
	Time sum;
	for (int i = 0; i < numOfElements; i++) {
		sum = sum + timesArray[i];
	}
	return sum;
}


Harmonogram& Harmonogram::operator = (const Harmonogram& _new) {
	capacity = _new.capacity;
	numOfElements = _new.numOfElements;
	timesArray = new Time[capacity];
	for (int i = 0; i < _new.numOfElements; i++) {
		timesArray[i] = _new.timesArray[i];
	}
	return *this;
}
