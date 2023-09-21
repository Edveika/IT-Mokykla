// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int valueN;
int valueSD;

// 2uzd viesieji kintamieji
float valueV;
int valueN2;
float ValueVV;

// 3uzd viesieji kintamieji
int valueA;
int valueB;
float valueK;

// 4uzd viesieji kintamieji
int pointsN;
int pointsM;

// 5uzd viesieji kintamieji
int candieWeightK;
int candieWeightM;

//Metodu deklaracijos
int Floor(int n, int sd);
float Water(float v, int n, float vv);
float SchoolNotebookCosts(int a, int b, float k);
std::string GameWinner(int n, int m);
std::string BougthCandies(int m, int k);

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys: 2 ir 10
	valueN = 2;
	valueSD = 10;

	// Apskaiciuojam plota ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << valueN << " ir " << valueSD << " Rezultatas: " << Floor(valueN, valueSD) << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "---------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys: 1001, 50 ir 0.1
	valueV = 1001;
	valueN2 = 50;
	ValueVV = 0.1f;

	// Apskaiciuojam kelioms paroms uzteks vandens ir isvedam rezultata i konsole
	std::cout << "Pradiniai duomenys: " << valueV << ", " << valueN2 << " ir " << ValueVV << " Rezultatas: " << Water(valueV, valueN2, ValueVV) << " paroms" << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "---------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pradiniai duomenys: 5, 15 ir 0.26
	valueA = 5;
	valueB = 15;
	valueK = 0.26;

	// Apskaiciuojam kiek kainuos sasiuviniai ir atspausdinam konsoleje
	std::cout << "Pradiniai duomenys: " << valueA << ", " << valueB << " ir " << valueK << " Rezultatas: " << SchoolNotebookCosts(valueA, valueB, valueK) << " Eur." << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "---------------------------" << std::endl;

	//
	// 4 UZD
	//

	// Pradiniai duomenys: 3 ir 2
	pointsN = 3;
	pointsM = 2;

	// Palyginam tasku reiksmes ir isvedam zaidimo rezultata i konsole
	std::cout << "Pradiniai duomenys: " << pointsN << " ir " << pointsM << " Rezultatas: " << GameWinner(pointsN, pointsM) << std::endl;

	// Pradiniai duomenys: 2 ir 3
	pointsN = 2;
	pointsM = 3;

	// Palyginam tasku reiksmes ir isvedam zaidimo rezultata i konsole
	std::cout << "Pradiniai duomenys: " << pointsN << " ir " << pointsM << " Rezultatas: " << GameWinner(pointsN, pointsM) << std::endl;

	// Pradiniai duomenys: 3 ir 3
	pointsN = 3;
	pointsM = 3;

	// Palyginam tasku reiksmes ir isvedam zaidimo rezultata i konsole
	std::cout << "Pradiniai duomenys: " << pointsN << " ir " << pointsM << " Rezultatas: " << GameWinner(pointsN, pointsM) << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti
	std::cout << "---------------------------" << std::endl;

	//
	// 5 UZD
	//

	// Pradiniai duomenys: 300 ir 200
	candieWeightM = 300;
	candieWeightK = 200;

	// Palyginam Martyno ir Karolio saldainiu svori ir isvedam i konsole kuris turi daugiau
	std::cout << "Pradiniai duomenys: " << candieWeightK << " ir " << candieWeightM << " Rezultatas: " << BougthCandies(candieWeightM, candieWeightK) << std::endl;

	// Pradiniai duomenys: 200 ir 300
	candieWeightM = 200;
	candieWeightK = 300;

	// Palyginam Martyno ir Karolio saldainiu svori ir isvedam i konsole kuris turi daugiau
	std::cout << "Pradiniai duomenys: " << candieWeightK << " ir " << candieWeightM << " Rezultatas: " << BougthCandies(candieWeightM, candieWeightK) << std::endl;

	// Pradiniai duomenys: 300 ir 300
	candieWeightM = 300;
	candieWeightK = 300;

	// Palyginam Martyno ir Karolio saldainiu svori ir isvedam i konsole kuris turi daugiau
	std::cout << "Pradiniai duomenys: " << candieWeightK << " ir " << candieWeightM << " Rezultatas: " << BougthCandies(candieWeightM, candieWeightK) << std::endl;

	// Grazinam 0
	return 0;
}

int Floor(int n, int sd)
{
	return n * sd; // Apskaiciuojam plota dauginant n is sd. Grazinam rezultata
}

float Water(float v, int n, float vv)
{
	return v / (n * vv); // Visa vandens kieki padalinam is vandens kiekio isgerto per diena ir gaunam p(kelioms paroms uzteks vandens)
}

float SchoolNotebookCosts(int a, int b, float k)
{
	return (a + b) * k; // Sudedam sasiuvinius ir dauginam is kainos
}

std::string GameWinner(int n, int m)
{
	// Jeigu Jono tasku skaicius didesnis uz Povilo
	if (n > m)
		// Zaidima laimejo Jonas
		return "Zaidima laimejo Jonas";
	// Kitaip jeigu Povilo tasku skaicius didesnis uz Jono
	else if (n < m)
		// Zaidima laimejo Povilas
		return "Zaidima laimejo Povilas";
	// Jeigu salygos parasytos virsuje nera "teisingos"
	else
		// Lygiosios :)
		return "Zaidimo niekas nelaimejo, lygiosios.";
}

std::string BougthCandies(int m, int k)
{
	// Jeigu Martyno saldainiu svoris didesnis uz Karolio saldainiu svorio
	if (m > k)
		// Martynas turi daugiau saldaniu
		return "Martynas nusipirko daugiau saldainiu";
	// Kitaip jeigu Martyno saldainiu svoris mazesnis uz Karolio saldainiu svori
	else if (m < k)
		// Karolis turi daugiau saldaniu
		return "Karolis nusipirko daugiau saldainiu";
	// Jeigu salygos parasytos virsuje nera "teisingos"
	else
		// Abu turi po lygiai
		return "Abu nusipirko po lygiai";
}