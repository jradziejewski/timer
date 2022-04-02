#pragma once
#include "Time.h"
class Harmonogram
{
private:
	int capacity;
	int numOfElements;
	Time* timesArray;

	void expand();
	void initialize(int from);
public:
	Harmonogram() {
		capacity = 10;
		numOfElements = 0;
		timesArray = new Time[capacity];
	}
	~Harmonogram() {
		delete[] timesArray;
	}

	void add(Time time);
	Time getAt(int index);
};

