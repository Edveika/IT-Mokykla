// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

// Taskai 
int points[] = { 1794, 1682, 1787, 1891, 1710 };

int main()
{
	//
	// Namu darbas
	//

	int k;

	int x;

	// Didziausia tasku suma
	int tMax = 0;

	// Maziausia tasku suma
	int tMin = 0;

	// Tasku skaicius
	int n = sizeof(sizeof(points) / sizeof(points[1]));

	// Ofstreamas filu rasymui
	std::ofstream file;

	// Atidarom Duomenys.txt
	file.open("Duomenys.txt");

	// Iteruojam per taskus
	for (int i = 0; i <= n; i++)
		// Surasom taskus i faila
		file << points[i] << std::endl;

	// Uzdarom faila
	file.close();

	// Ifstreamas failu skaitymui
	std::ifstream myFile;

	// Atidaorm Duomenys.txt
	myFile.open("Duomenys.txt");

	// Surasom reiksmes i x
	while (myFile >> x)
	{
		// Jeigu tmax ir tmin yra = 0
		if (tMax == 0 && tMin == 0)
		{
			// Suteikiam pradines reiksmes
			tMax = x;
			tMin = x;
		}

		// Jeigu x yra daugiau uz tMax
		if (x > tMax)
			// tMax yra lygus x, nes jis didesnis
			tMax = x;
		// Kitaip jeigu x maziau uz tmin
		else if (x < tMin)
			// tmin = x, nes x mazesnis
			tMin = x;
	}

	// Atspausdinam rezultata
	std::cout << "tMax: " << tMax << std::endl;
	std::cout << "tMin: " << tMin << std::endl;

	// Grazinam 0
	return 0;
}