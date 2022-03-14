#include "Time.h"
#include <iostream>

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