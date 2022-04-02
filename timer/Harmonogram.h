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
	Harmonogram();
	~Harmonogram();

	void add(Time time);
	void printAll();
	int count();
	Time getAt(int index);
	Time sumAll();

};

