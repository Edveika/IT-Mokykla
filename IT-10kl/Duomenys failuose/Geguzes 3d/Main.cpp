// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>
#include <string>

int prices[] = { 12, 6, 19, 16, 2 };

int main()
{
	//
	// Namu darbas
	//

	int x;

	// Prekes kuriu kaina maziau kaip 14 eur skaicius
	int k = 0;

	// Padori kaina :P
	int m = 14;

	// Pirkiniu kiekis
	int n = sizeof(sizeof(prices) / sizeof(prices[1]));

	// Ofstreamas rasymui i failus
	std::ofstream file;

	// Atidarom Duomenys.txt
	file.open("Duomenys.txt");

	// Iteruojam per kainas
	for (int i = 0; i <= n; i++)
		// Surasom kainas i faila
		file << prices[i] << std::endl;

	// Uzdarom faila
	file.close();

	// Ifstreamas duomenu is failo skaitymui
	std::ifstream myfile;

	// Atidarom faila
	myfile.open("Duomenys.txt");

	// Einam per kiekviena skaiciu
	while (myfile >> x)
		// Ir tikrinam ar jis nera didenis uz m
		if (x <= m)
			// Jeigu nera didnam k
			k++;

	// Uzdarom faila
	myfile.close();

	// Atspausdinam rezultata
	std::cout << "Prekes kuriu kaina nera didesne nei " << m << " skaicius: " << k <<std::endl;

	// Grazinam 0
	return 0;
}