// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int numberA;
int numberB;
int numberC;

// 2uzd viesieji kintamieji
int ropeMetersM;

// 3uzd viesieji kintamieji
int valueX;

// Metodu deklaracijos
int BiggestNumber(int a, int b, int c);
int PotatoFarmArea(int m);
int GraphicValueY(int x);

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys: 1, 5 ir 9
	numberA = 1;
	numberB = 5;
	numberC = 9;

	// Palyginam duotus skaicius ir atspausdinam didziausia
	std::cout << "Pradiniai duomenys: " << numberA << ", " << numberB << " ir " << numberC << " Didziausia reiksme: " << BiggestNumber(numberA, numberB, numberC) << std::endl;

	// Pradiniai duomenys: 2, 7 ir 3
	numberA = 2;
	numberB = 7;
	numberC = 3;

	// Palyginam duotus skaicius ir atspausdinam didziausia
	std::cout << "Pradiniai duomenys: " << numberA << ", " << numberB << " ir " << numberC << " Didziausia reiksme: " << BiggestNumber(numberA, numberB, numberC) << std::endl;

	// Pradiniai duomenys: 7, 1 ir 2
	numberA = 7;
	numberB = 1;
	numberC = 2;

	// Palyginam duotus skaicius ir atspausdinam didziausia
	std::cout << "Pradiniai duomenys: " << numberA << ", " << numberB << " ir " << numberC << " Didziausia reiksme: " << BiggestNumber(numberA, numberB, numberC) << std::endl;

	// Linija atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "---------------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys: 22
	ropeMetersM = 22;

	// Apskaiciuojam S ir atspausdinam
	std::cout << "Pradiniai duomenys: " << ropeMetersM << " Rezultatas: " << PotatoFarmArea(ropeMetersM) << std::endl;

	// Pradiniai duomenys: 21
	ropeMetersM = 21;

	// Apskaiciuojam S ir atspausdinam
	std::cout << "Pradiniai duomenys: " << ropeMetersM << " Rezultatas: " << PotatoFarmArea(ropeMetersM) << std::endl;

	// Linija atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "---------------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pradiniai duomenys: -4
	valueX = -4;

	// Apskaiciuojam Y reiksme ir atspausdinam konsoleje
	std::cout << "Pradiniai duomenys: " << valueX << " Rezultatas: " << GraphicValueY(valueX) << std::endl;

	// Pradiniai duomenys: -1
	valueX = -1;

	// Apskaiciuojam Y reiksme ir atspausdinam konsoleje
	std::cout << "Pradiniai duomenys: " << valueX << " Rezultatas: " << GraphicValueY(valueX) << std::endl;

	// Pradiniai duomenys: 1
	valueX = 1;

	// Apskaiciuojam Y reiksme ir atspausdinam konsoleje
	std::cout << "Pradiniai duomenys: " << valueX << " Rezultatas: " << GraphicValueY(valueX) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int BiggestNumber(int a, int b, int c)
{
	// Jeigu a yra didesnis uz b ir c
	if (a > b && a > c)
		// Didziausia reiksme tures a, grazinam rezultata
		return a;
	// Jeigu b yra didesnis uz a ir c
	else if (b > a && b > c)
		// Didziausia reiksme tures b, grazinam rezultata
		return b;
	// Jeigu c yra didesnis uz a ir b
	else if (c > a && c > b)
		// Didziausia reiksme tures c, grazinam rezultata
		return c;
}

int PotatoFarmArea(int m)
{
	// Sitos uzduoties pats matematiskai ismastyti nesugebejau, teko paziureti filmuka.

	// Jeigu liekana yra maziau uz 2 (1 arba 2)
	if (m % 4 < 2)
		// Tiesiog sudauginam krastiniu reiksmes ir grazinam plota(S)
		return (m / 4) * (m / 4);
	// Kitaip jeigu liekana nera maziau uz 2
	else
		// Prie vienos krastines pridedam 1 ir sudauginam krastiniu reiksmes
		return (m / 4) * ((m / 4) + 1);
}

int GraphicValueY(int x)
{
	// Jeigu x yra maziau arba lygu -1
	if (x <= -1)
		// Y reiksme bus lygi x+5
		return x + 5;
	// Jeigu x yra daugiau uz -1
	else
		// Y reiksme bus lygi -x + 3
		return -x + 3;
}