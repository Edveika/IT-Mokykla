// Darba atliko: Edvinas Bureika
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	//
	// 1 UZD
	//

	// Kintamasis y reiksmei laikyti
	float y;

	// Iteruojam per x
	for (int x = -5; x <= 5; x++)
	{
		// Apskaiciuojam y
		y = std::sqrt(std::pow(x, 2) + 3 * x + 5);

		// Atspausdinam x ir y reiksmes su 2 skaic. po kablelio
		std::cout << std::setprecision(3) << "X: " << x << " Y: " << y << std::endl;
	}

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "-------------------------------" << std::endl;

	//
	// 5 UZD
	//

	// Vaiko metu kintamasis
	int n = 16;

	// Vaiko pinigu kintamasis
	int money = 5; // 5, nes vos tik gimus vaikas gavo 5 lt

	// Iteruojam per vaiko gimtadienius
	for (int i = 1; i <= n; i++)
	{
		// Su kiekvienais metais duodam vaikui tiek pinigu, kiek jam suejo metu
		money += i;

		// Atspausdinam rezultata
		std::cout << "Metai: " << i << " Pinigai: " << money << std::endl;
	}

	// Grazinam 0
	return 0;
}