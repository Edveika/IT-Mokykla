// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

int main()
{
	// Duomenys is failo
	int x;

	// Pazymiu skaicius
	int gradeCount = 0;

	// Vidurkis
	float average = 0.f;

	// Failo kuriame mokinio pazymiai pavadinimas
	std::string fileName;

	// Paprasom naudotojo ivesti failo pavadinima
	std::cout << "Iveskite failo pavadinima(su extensionu): ";
	std::cin >> fileName;

	// Ifstreamas skaitymui is failu
	std::ifstream myFile;

	// Atidarom pasirinkta faila
	myFile.open(fileName);

	// Rasom failo duomenis i X
	while (myFile >> x)
	{
		// Didinam pazymiu skaiciu
		gradeCount++;

		// Sudedam visus pazymius
		average += x;
	}

	// Atspausdinam rezultata padalinus pazymius is pazymiu skaiciaus
	std::cout << "Vidurkis: " << average / gradeCount << std::endl;

	// Uzdarom faila
	myFile.close();

	// Grazinam 0
	return 0;
}