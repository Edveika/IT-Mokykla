// Darba atliko: Edvinas Bureika
#include <iostream>
#include<cmath>

// 1uzd viesieji kintamieji
int x;
int y;

// Funckiju deklaracijos
int FirstTask(int x, int y);
int SecondTaskCube(int x);
int SecondTaskSquare(int x);
int Months(int age);
int Days(int age);

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys 5 ir 10
	x = 5;
	y = 10;
	std::cout << "Pradiniai duomenys: " << x << " ir " << y << " Rezultatas: " << FirstTask(x, y) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityt
	std::cout << "-------------------------------" << std::endl;

	//
	// 2 UZD
	//

	std::cout << "Rezultatas: " << SecondTaskCube(4) << std::endl;
	std::cout << "Rezultatas: " << SecondTaskSquare(4) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityt
	std::cout << "-------------------------------" << std::endl;

	//
	// 3 UZD
	//

	std::cout << "Menesiai: " << Months(16) << std::endl;
	std::cout << "Dienos: " << Days(16) << std::endl;

	// Grazinam 0
	return 0;
}

int FirstTask(int x, int y)
{
	return 2 * x - 30 + 3 * std::pow(y, 2); // Apskaiciuojam reiksme ir grazinam rezultata
}

int SecondTaskCube(int x)
{
	return std::pow(x, 3); // x keliam kubu ir grazinam rezultata
}

int SecondTaskSquare(int x)
{
	return std::pow(x, 2); // x keliam kvadratu ir grazinam rezultata
}

int Months(int age)
{
	return age * 12; // Metus paverciam i menesius ir grazinam rezultata 
}

int Days(int age)
{
	return age * 365;
}