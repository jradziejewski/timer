#include "Time.h"

void Time::setSeconds(int number) {
	if (number < 0 || number > 59) {
		std::cout << "Bledny format. Sprobuj ponownie\n";
		return;
	}
	else seconds = number;
}

void Time::setMinutes(int number) {
	if (number < 0 || number > 59) {
		std::cout << "Bledny format. Sproboj ponownie\n";
		return;
	}
	else minutes = number;
}

void Time::setHours(int number) {
	if (number < 0 || number > 23) {
		std::cout << "Bledny format. Sproboj ponownie\n";
		return;
	}
	else hours = number;
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