// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int valueX;

// 2uzd viesieji kintamieji
int valueA;
int valueB;
int valueX2;
int groupNumber;

// Metodu deklaracijos
int GraphicValueY(int x);
int Tests(int a, int b, int x, int group);

int main()
{
	//
	// 1 UZD
	//

	valueX = -3;
	std::cout << "Pradiniai duomenys(X): " << valueX << " Rezultatas(Y): " << GraphicValueY(valueX) << std::endl;

	valueX = 1;
	std::cout << "Pradiniai duomenys(X): " << valueX << " Rezultatas(Y): " << GraphicValueY(valueX) << std::endl;

	valueX = 5;
	std::cout << "Pradiniai duomenys(X): " << valueX << " Rezultatas(Y): " << GraphicValueY(valueX) << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "---------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Paprasom naudotojo ivesti savo eiles nr.
	std::cout << "Iveskite savo numeri: ";
	std::cin >> groupNumber;

	// Pradiniai duomenys: 5, 2 ir 3
	valueA = 5;
	valueB = 2;
	valueX2 = 3;

	// Apskaiciuojam y reiksme ir isvedam i ekrana
	std::cout << "Y = " << Tests(valueA, valueB, valueX2, groupNumber) << std::endl;
	
	// Paprasom naudotojo ivesti savo eiles nr.
	std::cout << "Iveskite savo numeri: ";
	std::cin >> groupNumber;

	// Pradiniai duomenys: 5, 2 ir 3
	valueA = 5;
	valueB = 2;
	valueX2 = 3;

	// Apskaiciuojam y reiksme ir isvedam i ekrana
	std::cout << "Y = " << Tests(valueA, valueB, valueX2, groupNumber) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int GraphicValueY(int x)
{
	// Jeigu x yra maziau uz -2
	if (x < -2)
		// Y bus lygu x + 6
		return x + 6;
	// Kitaip jeigu x maziau uz 3
	else if (x < 3)
		// Y bus lygu 4
		return 4;
	// Jeigu x > 3
	else
		// Y bus lygu -x + 7
		return -x + 7;
}

int Tests(int a, int b, int x, int group)
{
	// Jeigu skaicius lyginis
	if (group % 2 == 0)
		// y = a * x + b^2
		return a * x + std::pow(b, 2);
	// Kitaip jeigu skaicius nelyginis
	else
		// y = a * x^2 + b
		return a * std::pow(x, 2) + b;
}