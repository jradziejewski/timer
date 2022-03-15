#include "Time.h"
#include <iostream>
#include <math.h>

void Time::setSeconds(int number) {
	if (number < 0) 
		return;
	seconds = number;
}

void Time::setMinutes(int number) {
	if (number < 0) 
		return;
	minutes = number;
}

void Time::setHours(int number) {
	if (number < 0) 
		return; 
	hours = number;
}

int Time::getSeconds() {
	return seconds;
}

int Time::getMinutes() {
	return minutes;
}

int Time::getHours() {
	return hours;
}

void Time::printTime() {
	system("CLS");
	std::cout << std::endl << "Czas: " << hours << ":";
	if (minutes > 9) std::cout << minutes;
	else std::cout << "0" << minutes;
	std::cout << ":";
	if (seconds > 9) std::cout << seconds;
	else std::cout << "0" << seconds;

	std::cout << "\n\n";

}

void Time::refactorTime() {
	int temp;
	if (seconds > 60) {
		temp = seconds / 60;
		minutes += floor(temp);
		seconds -= 60 * temp;
	}
	if (minutes > 60) {
		temp = minutes / 60;
		hours += floor(temp);
		minutes -= 60 * temp;
	}
}