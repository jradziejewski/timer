#include <iostream>
#include "Time.h"
#include "Harmonogram.h"
#include <math.h>
#include <crtdbg.h>

Harmonogram firstN(Harmonogram& _old, int n);
Harmonogram withinSum(Harmonogram& _old, Time sum);
void addTimes(Harmonogram& _new);

int main() {
	Harmonogram h1;
	addTimes(h1);

	int menu = 1;
	while (menu) {
		char pick;
		std::cout << "Wybierz opcje: \n 1. Wyswietl harmonogram \n 2. Wybierz tylko pierwsze n czasow\n 3. Wybierz czasy mniejsze od sumy T\n 4. Zwieksz wybrany czas\n 5. Zresetuj harmonogram\n x. Wyjdz\n";
		std::cin >> pick;
		switch (pick) {
		case '1':
		{
			system("CLS");
			h1.printAll();
			break;
		}
		case '2':
		{
			system("CLS");
			int n;
			std::cout << "Podaj ile pierwszych czasow zachowac: ";
			std::cin >> n;
			h1 = firstN(h1, n);
			break;
		}
		case '3':
		{
			system("CLS");
			Time sum;
			int temp;
			std::cout << "Wprowadz czas, ktorego nie moze przekroczyc suma w harmonogramie w formacie GG:MM:SS. ";
			std::cout << "\nPodaj godziny:";
			std::cin >> temp;
			sum.setHours(temp);
			std::cout << "\nPodaj minuty:";
			std::cin >> temp;
			sum.setMinutes(temp);
			std::cout << "\nPodaj sekundy:";
			std::cin >> temp;
			sum.setSeconds(temp);
			h1 = withinSum(h1, sum);
			break;
		}
		case '4':
		{
			system("CLS");
			h1.printAll();

			std::cout << "\nPodaj numer czasu ktory chcesz zwiekszyc: ";
			int index, sec;
			std::cin >> index;
			std::cout << "\nPodaj o ile sekund chcesz zwiekszyc czas: ";
			std::cin >> sec;
			system("CLS");
			h1.incrementAt(index - 1, sec);
			break;
		}
		case '5':
		{
			system("CLS");
			addTimes(h1);
			break;
		}
		default:
			system("CLS");
			menu = 0;
			break;
		}
	}
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

void addTimes(Harmonogram& _new) {
	_new.clear();
	_new.add(535);
	_new.add(12255);
	_new.add(21);
	_new.add(145);
	_new.add(4115);
	_new.add(535);
	_new.add(564);
	_new.add(1225);
	_new.add(852);
	_new.add(3115);
	_new.add(5548);
	_new.add(114);
	_new.add(58);
	_new.add(525);
	_new.add(35515);
	_new.add(1215);
	_new.add(956);
	_new.add(1245);
}