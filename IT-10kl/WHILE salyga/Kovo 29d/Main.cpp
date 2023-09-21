// Darba atliko: Edvinas Bureika
// Pastaba: patartina kompiliuoti koda release x86 rezimu.
#include <iostream>

// 1uzd viesieji kintamieji
int numberA;

// Metodu deklaracijos
int Multiply(int a);
int GetNumberLength(int a);

int main()
{
	//
	// 1 UZD
	//

	// Pastaba: funkcija buvo uzprogramuota turint galvoje, kad skaicius sesiazenklis.

	// Pradiniai duomenys: 611221
	numberA = 611221;

	// Apskaiciuojam sandauga ir atspausdinam konsoleje
	std::cout << "Pradiniai duomenys: " << numberA << " Sandauga: " << Multiply(numberA) << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "------------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Apskaiciuojam kiek skaiciu turi skaitmuo 6112211 ir isvedam rezultata i konsole
	std::cout << "Skaiciu suma: " << GetNumberLength(6112211) << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "------------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pastaba: funkcija buvo uzprogramuota turint galvoje, kad skaicius sesiazenklis.

	// Pradiniai duomenys: 63258
	int a = 63258;

	// Lyginiu skaiciu suma
	int lyg = 0;

	// Nelyginiu skaiciu suma
	int nelyg = 0;

	// Kintamasis i "while" ciklui
	int i = 5;

	// Isskaidyta a surasytas i digit arrayju
	int digit[5];

	// Kintamasis j "while" ciklui
	int j = 0;

	// Pirmiausiai skaicius isskaidom ir surasom i digits arrayju
	while (i >= 0)
	{
		// Mazinam i, nes iteruojam is galo
		i--;

		// Surasom skaicius i digit arrayju
		digit[i] = a % 10;
		a /= 10;
	}

	// Tada iteruojam per skaicius(digits)
	while (j < 5)
	{
		// Jeigu dalinant is 2 liekanos nera
		if (digit[j] % 2 == 0)
			// Skaiciu lyginis, padidinam lyg skaiciu suma vienetu
			lyg++;
		// Jeigu dalinant is 2 liekana yra, padidinam nelyg skaiciu suma vienetu
		else
			nelyg++;

		// Didinam j
		j++;
	}

	// Lyginiu skaiciu rezultato isvedimas i konsole
	std::cout << "Lyginiu skaiciu: " << lyg << std::endl;

	// Nelyginiu skaiciu rezultato isvedimas i konsole
	std::cout << "Nelyginiu skaiciu: " << nelyg << std::endl;

	// Grazinam 0
	return 0;
}

int Multiply(int a)
{
	// Kintamasis i "while" ciklui
	int i = 6;

	// Isskaidyta a surasytas i digit arrayju
	int digit[6];

	// Sandauga
	int multiply = 1;

	// Kintamasis j "while" ciklui
	int j = 0;

	// Pirmiausiai skaicius isskaidom ir surasom i digits arrayju
	while (i >= 0)
	{
		// Mazinam i, nes iteruojam is galo
		i--;

		// Surasom skaicius i digit arrayju
		digit[i] = a % 10;
		a /= 10;
	}

	// Tada iteruojam per skaicius(digits)
	while (j < 6)
	{
		// Skaiciu sandaugos formule
		multiply *= digit[j];

		// Didinam j
		j++;
	}

	// Grazinam rezultata
	return multiply;
}

int GetNumberLength(int a)
{
	// Pradine ilgio reiksme, savaime suprantama lygi 0
	int length = 0;

	// Kol a dalinasi is 10
	while (a /= 10)
		// Didinam ilgi
		length++;

	// Grazinam rezultata
	return length;
}