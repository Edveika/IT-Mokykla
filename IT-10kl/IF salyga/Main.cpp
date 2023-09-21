// Darba atliko: Edvinas Bureika
#include <iostream>

// 8 uzd viesieji kintamieji
int boxesN;
int vechicleSizeM;

// Metodu deklaracijos
int Boxes(int boxes, int vechicleSize);
void Olympics(int m);

int main()
{
	// 
	// 8 UZD
	//

	// Pradiniai duomenys: 100 ir 14
	boxesN = 100;
	vechicleSizeM = 14;

	// Apskaiciuojam reisu skaiciu ir ji atspausdinam
	std::cout << "Pradiniai duomenys: " << boxesN << " ir " << vechicleSizeM << " Rezultatas: " << Boxes(boxesN, vechicleSizeM) << std::endl;

	// Pradiniai duomenys: 98 ir 14
	boxesN = 98;
	vechicleSizeM = 14;

	// Apskaiciuojam reisu skaiciu ir ji atspausdinam
	std::cout << "Pradiniai duomenys: " << boxesN << " ir " << vechicleSizeM << " Rezultatas: " << Boxes(boxesN, vechicleSizeM) << std::endl;

	//
	// 9 UZD
	//

	Olympics(1904);
	Olympics(2005);
}

// Metodu implementacijos
int Boxes(int boxes, int vechicleSize)
{
	// Apskaiciuojam kiek kartu reikes vezti
	int trips = boxes / vechicleSize;

	// Jeigu liekana nera daugiau uz k ir lygi 0, reiskiasi kad liko tik vienas vezimas
	if (boxes % vechicleSize < trips && boxes % vechicleSize != 0)
		// Pridedam 1 vezima
		return trips += 1;
	// Kitaip jeigu daugiau arba lygu
	else if (boxes % vechicleSize >= trips)
		// Liekana dalinam is masinos deziu talpos ir rezultata pridedam prie vezimu skaiciaus
		return trips += (boxes % vechicleSize) / vechicleSize; // Cia gali buti problemu...
	// Jei liekanos nera
	else
		// Tiesiog grazinam rezultata
		return trips;
}

void Olympics(int m)
{
	// Jeigu metai olimpiniai
	if (m % 4 == 0)
	{
		int olympicsCount = ((m - 1896) / 4) + 1; // Pridedama, nes vienos zaidynes ivyko 1896

		std::cout << olympicsCount << std::endl; // Isvedamas rezultatas
	}
	// Kitaip jeigu ne
	else
		std::cout << "Metai neolimpiniai" << std::endl; // Isvedama, kad metai neolimpiniai
}