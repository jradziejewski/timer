#include "Time.h"
#include <iostream>
#include <math.h>

/* ----------- CONSTRUCTORS */

Time::Time(int _seconds, int _minutes, int _hours) {
	seconds = _seconds;
	minutes = _minutes;
	hours = _hours;
}

Time::Time(int _seconds, int _minutes) {
	seconds = _seconds;
	minutes = _minutes;
	hours = 0;
}

Time::Time(int _seconds) {
	seconds = _seconds;
	minutes = 0;
	hours = 0;
}

Time::Time() {
	seconds = 0;
	minutes = 0;
	hours = 0;
}




/* --------------- SETTERS --------------- */

void Time::setSeconds(int number) {
	if (number < 0) return;
	seconds = number;
}

void Time::setMinutes(int number) {
	if (number < 0) return;
	minutes = number;
}

void Time::setHours(int number) {
	if (number < 0) return;
	hours = number;
}

/* --------------- GETTERS --------------- */

int Time::getSeconds() {
	return seconds;
}

int Time::getMinutes() {
	return minutes;
}

int Time::getHours() {
	return hours;
}

/* --------------- METHODS --------------- */

void Time::printTime() {
	refactorTime();
	std::cout << "Czas: " << hours << ":";
	if (minutes > 9) std::cout << minutes;
	else std::cout << "0" << minutes;
	std::cout << ":";
	if (seconds > 9) std::cout << seconds;
	else std::cout << "0" << seconds;
	std::cout << std::endl;
}

void Time::refactorTime() {
	int temp;
	if (seconds >= 60) {
		temp = seconds / 60;
		minutes += floor(temp);
		seconds -= 60 * temp;
	}
	if (minutes >= 60) {
		temp = minutes / 60;
		hours += floor(temp);
		minutes -= 60 * temp;
	}
}

void Time::convertToSeconds() {
	int temp;
	temp = hours * 60;
	hours = 0;
	minutes += temp;
	temp = minutes * 60;
	minutes = 0;
	seconds += temp;
}

/* --------------- OPERATORS --------------- */

Time Time::operator + (Time& _newTime) {
	convertToSeconds();
	Time temp = _newTime;
	temp.seconds += seconds;
	return temp;
}

Time Time::operator += (int _newSeconds) {
	seconds += _newSeconds;
	return *this;
}

bool Time::operator == (Time& _time) {
	convertToSeconds();
	_time.convertToSeconds();
	if (seconds == _time.seconds) {
		return true;
	}
	else return false;
}

bool Time::operator != (Time& _time) {
	if (*this == _time) return false;
	else return true;
}

bool Time::operator < (Time& _time) {
	convertToSeconds();
	_time.convertToSeconds();
	if (seconds < _time.seconds) {
		return true;
	}
	else return false;
}

bool Time::operator > (Time& _time) {
	if (!(*this < _time) && !(*this == _time)) return true;
	else return false;
}

bool Time::operator <= (Time& _time) {
	if (*this < _time || *this == _time) return true;
	else return false;
}

bool Time::operator >= (Time& _time) {
	if (*this > _time || *this == _time) return true;
	else return false;
}
