// Darba atliko: Edvinas Bureika
#include <iostream>

// Viesieji kintamieji
int input = 0;

int main()
{
	//
	// 1 UZD
	//

	// Kintamasis i kuri naudosime while ciklui
	int i = 0;

	// Kintamasis rezultatui laikyti
	float average = 0;

	// Nesibaigiantis ciklas
	while (true)
	{
		// Paprasom naudotojo ivesti skaicius
		std::cout << "Iveskite skaicius: ";
		std::cin >> input;

		// Susumuojam ivestus skaiciu
		average += input;

		// Jeigu vartotojas ivede 0
		if (input == 0)
		{
			// Apskaiciuojam vidurki
			average /= i;

			// Uzbaigiam cikla
			break;
		}

		// Didinam i
		i++;
	}

	// Atspausdinam rezultata
	std::cout << "Vidurkis: " << average << std::endl;

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti isvesti
	std::cout << "------------------" << std::endl;

	//
	// 2 UZD
	//

	// Kintamasis j kuri naudosime while ciklui
	int j = 0;

	// Kintamasis rezultatui laikyti
	float multiply = 1;

	// Nesibaigiantis ciklas
	while (true)
	{
		// Paprasom naudotojo ivesti skaicius
		std::cout << "Iveskite skaicius: ";
		std::cin >> input;

		// Susumuojam ivestus skaiciu
		if (input > 5)
			multiply *= input;

		// Jeigu vartotojas ivede 0
		if (input == 0)
			// Uzbaigiam cikla
			break;

		// Didinam j
		j++;
	}

	// Atspausdinam rezultata
	std::cout << "Sandauga: " << multiply << std::endl;

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti isvesti
	std::cout << "------------------" << std::endl;

	//
	// 3 UZD
	//

	// Kintamasis j kuri naudosime while ciklui
	int k = 0;

	// Kintamasis lyg skaiciu sumai laikyti
	float lyg = 0;

	// Kintamasis nelyg skaiciu sumai laikyti
	float nelyg = 0;

	// Nesibaigiantis ciklas
	while (true)
	{
		// Paprasom naudotojo ivesti skaicius
		std::cout << "Iveskite skaicius: ";
		std::cin >> input;

		// Tikrinam ivestus skaicius
		// Jeigu dalinant is 2 liekana lygi 0
		if (input % 2 == 0)
			// Skaicius lyginis, padidinam lyg skaiciu suma
			lyg++;
		// Jeigu dalinant is 2 lieka liekana
		else
			// Skaicius nelyginis, padidinam nelyg sakaiciu suma
			nelyg++;

		// Jeigu vartotojas ivede 0
		if (input == 0)
		{
			// Is lyginiu skaiciu sumos atimam 1, nes 0 yra lyginis, o mes ji naudojam navigacijai.
			lyg--;

			// Uzbaigiam cikla
			break;
		}

		// Didinam k
		k++;
	}

	// Atspausdinam rezultata
	std::cout << "Lyginiai skaiciai: " << lyg << std::endl;
	std::cout << "Nelyginiai skaiciai: " << nelyg << std::endl;

	// Grazinam 0
	return 0;
}