// Darba atliko: Edvinas Bureika
// Sitam darbe nenaudojau metodu, nes nebuvo tikslo :D
#include <iostream>

int main()
{
	//
	// 1 UZD
	//

	// Pastaba: n yra flotas, nes kitaip bus klaidu skaiciuojant(gaunasi 176)
	float n; // Studentu skaicius
	float u; // Studentu ugiai
	float uVid = 0; // Ugiu vidurkis

	// Mokiniu skaiciaus ivedimas
	std::cout << "Iveskite studentu skaiciu: ";
	std::cin >> n;

	// Iteruojam per mokinius
	for (int i = 1; i <= n; i++)
	{
		// Mokinio i ugio ivedimas
		std::cout << "Iveskite studento " << i << " auksti(cm): ";
		std::cin >> u;

		// Ugio vidurkio apskaiciavimas
		uVid += u / n;

		// Jeigu ciklas baigesi
		if (i == n)
			// Atspausdinam vidurki
			std::cout << "Vidutinis studentu ugis: " << uVid << " cm" << std::endl;
	}

	//
	// 2 UZD(algoritmas)
	//

	int l = 0; // Varzu skaicius
	float r = 0; // Bendra varzos
	float rLaid = 0; // Grandines varza

	// Ivedam laidininku(l) reiksme
	std::cout << "Iveskite laidininku skaiciu: ";
	std::cin >> l;

	// Iteruojam per laidininkus
	for (int i = 1; i <= l; i++)
	{
		// Ivedam varzas
		std::cout << "Iveskite varza " << i << ": ";
		std::cin >> rLaid;

		// Apskaiciuojam r
		r += rLaid;

		// Jeigu ciklas baigesi
		if (i == l)
			// Atspausdinam rezultata
			std::cout << "[REZULTATAS] " << r << std::endl;
	}

	// Grazinam 0
	return 0;
}