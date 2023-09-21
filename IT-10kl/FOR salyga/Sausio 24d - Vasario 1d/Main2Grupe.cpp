// Darba atliko: Edvinas Bureika
#include <iostream>

int main()
{
	// Kintamasis y reiksmei laikyti
	float y;

	// Iteruojam per x (nuo -10 iki 10 zingsniu lygiu vienam)
	for (int x = -10; x <= 10; x++)
	{
		// Apskaiciuojam y
		y = 7 * std::pow(x, 2) + 5 * x - 3;

		// Atspausdinam x ir y reiksmes
		std::cout << "X: " << x  << " Y: " << y << std::endl;
	}

	// Grazinam 0
	return 0;
}