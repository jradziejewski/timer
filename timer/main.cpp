#include <iostream>
#include "Time.h"
#include "Harmonogram.h"
#include <math.h>
#include <crtdbg.h>

Harmonogram firstN(Harmonogram& _old, int n);
Harmonogram withinSum(Harmonogram& _old, Time sum);
void addTimes(Harmonogram& _new);

int main() {
	Harmonogram h1, h2, h3;
	addTimes(h1);

	int currentHarmonogram = 1;
	int menu = 1;
	while (menu) {
		char pick;
		std::cout << "Wybierz opcje: \n 1. Wyswietl harmonogram \n 2. Wybierz tylko pierwsze n czasow\n 3. Wybierz czasy mniejsze od sumy T\n 4. Zwieksz wybrany czas\n 5. Zresetuj harmonogram\n x. Wyjdz\n";
		std::cin >> pick;
		switch (pick) {
		case '1':
		{
			system("CLS");
			if (currentHarmonogram == 1) h1.printAll();
			else if (currentHarmonogram == 2) h2.printAll();
			else if (currentHarmonogram == 3) h3.printAll();
			break;
		}
		case '2':
		{
			system("CLS");
			int n;
			std::cout << "Podaj ile pierwszych czasow zachowac: ";
			std::cin >> n;
			h2 = firstN(h1, n);
			currentHarmonogram = 2;
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
			h3 = withinSum(h1, sum);
			currentHarmonogram = 3;
			break;
		}
		case '4':
		{
			system("CLS");
			if (currentHarmonogram == 1) h1.printAll();
			else if (currentHarmonogram == 2) h2.printAll();
			else if (currentHarmonogram == 3) h3.printAll();

			std::cout << "\nPodaj numer czasu ktory chcesz zwiekszyc: ";
			int index, sec;
			std::cin >> index;
			std::cout << "\nPodaj o ile sekund chcesz zwiekszyc czas: ";
			std::cin >> sec;
			system("CLS");
			if (currentHarmonogram == 1) {
				h1.incrementAt(index - 1, sec);
			}
			else if (currentHarmonogram == 2) {
				h2.incrementAt(index - 1, sec);
			}
			else if (currentHarmonogram == 3) {
				h3.incrementAt(index - 1, sec);
			}

			break;
		}
		case '5':
		{
			system("CLS");
			currentHarmonogram = 1;
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
	_new.add(5);
	_new.add(5);
	_new.add(5);
	_new.add(45);
	_new.add(5);
	_new.add(55);
	_new.add(54);
	_new.add(5);
	_new.add(5);
	_new.add(35);
	_new.add(5);
	_new.add(54);
	_new.add(5);
	_new.add(5);
	_new.add(55);
	_new.add(5);
	_new.add(56);
	_new.add(65);
}