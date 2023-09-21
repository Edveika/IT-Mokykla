// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

// Skaiciai 
int numbers[] = { 15, 2, 8, 9, 11 };

int main()
{
	//
	// Namu darbas
	//

	int x;

	// Skaiciu faile suma
	int numberCount = 0;
	
	// Skaiciai kurie dalinas is 5
	int dividableByFive = 0;

	// Skaiciai kurie dalinasi is septyniu
	int dividableBySeven = 0;

	// Skaiciai kurie dalinasi is tryju
	int dividableByThree = 0;

	// Lyginiu skaiciu suma
	int primeNumbersSum = 0;

	// Lyginiai skaiciai
	int prime = 0;

	// Nelyginiai skaiciai
	int notPrime = 0;

	// Tasku skaicius
	int n = sizeof(sizeof(numbers) / sizeof(numbers[1]));

	// Ofstreamas rasymui i failus
	std::ofstream file;

	// Atidarom Duomenys.txt
	file.open("Duomenys.txt");

	// Iteruojam per skaicius
	for (int i = 0; i <= n; i++)
		// Surasom juos i faila
		file << numbers[i] << std::endl;

	// Uzdarom faila
	file.close();

	// Iftsreamas failu skaitymui
	std::ifstream myFile;

	// Atidarom duomenys.txt
	myFile.open("Duomenys.txt");

	// Rasom duomenis i X
	while (myFile >> x)
	{
		numberCount++;

		// jeigu liekanos nera
		if (x % 2 == 0)
		{
			// Skaicius lyginis
			prime++;

			primeNumbersSum += x;
		}
		// Kitaip jei liekana yra
		else
			// Skaicius nelyginis
			notPrime++;

		// Jeigu dalinant is 5 liekana = 0
		if (x % 5 == 0)
			// Skaicius dalinasi is 5
			dividableByFive++;

		// Jeigu dalinant is 7 liekana = 0
		if (x % 7 == 0)
			// Skaicius dalinasi is 7
			dividableBySeven++;

		// Jeigu dalinant is 3 liekana = 0
		if (x % 3 == 0)
			// Skaicius dalinasi is 3
			dividableByThree++;
	}

	// Atspausdinam rezultata
	std::cout << "Lyginiai skaiciai: " << prime << std::endl;
	std::cout << "Nelyginiai skaiciai: " << notPrime << std::endl;
	std::cout << "Dalinasi is penkiu: " << dividableByFive << std::endl;
	std::cout << "Dalinasi is septyniu: " << dividableBySeven << std::endl;
	std::cout << "Dalinasi is tryju: " << dividableByThree << std::endl;
	std::cout << "Lyginiu skaiciu suma: " << primeNumbersSum << std::endl;
	std::cout << "Skaiciu suma: " << numberCount << std::endl;

	// Grazinam 0
	return 0;
}