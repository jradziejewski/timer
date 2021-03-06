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
	Harmonogram(Harmonogram& _new);
	~Harmonogram();

	void add(Time time);
	void pop();
	void incrementAt(int index, int seconds);
	void printAll();
	void clear();
	int count();
	Time getAt(int index);
	Time sumAll();
	Harmonogram& operator = (const Harmonogram& _new);

};
