// Darba atliko: Edvinas Bureika
#include <iostream>
#include <string>

// 4uzd viesieji kintamieji
int litersX;

// Metodu deklaracijos
// Nezinau kaip angliskai isskaidyti, vertejas isverte i Breakdown :)
void Breakdown(int number);
int LandingHour(int a, int b, int c);
int LandingMinute(int a, int b, int c);
void ReverseBreakdown(int number);
int JuiceJar(int liters);
int LeftoverJuice(int liters);

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys: 159
	Breakdown(159);

	// Pradiniai duomenys: 292
	Breakdown(292);

	// Pradiniai duomenys: 987
	Breakdown(987);

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti
	std::cout << "----------------------------" << std::endl;

	//
	// 2 UZD
	//

	std::cout << LandingHour(15, 20, 60) << ":" << LandingMinute(15, 20, 60) << std::endl;
	std::cout << LandingHour(23, 55, 14) << ":" << LandingMinute(23, 55, 14) << std::endl;

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti
	std::cout << "----------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pradiniai duomenys 4567
	ReverseBreakdown(4567);

	// Pradiniai duomenys 1357
	ReverseBreakdown(1357);

	// Pradiniai duomenys 2233
	ReverseBreakdown(2233);

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti
	std::cout << "----------------------------" << std::endl;

	//
	// 4 UZD
	//

	// Pradiniai duomenys: 17
	litersX = 17;

	// Apskaiciuojam pilnu indu ir likusiu sulciu kieki 
	std::cout << "Pradiniai duomenys: "<< litersX << " Rezultatas: " << JuiceJar(litersX) << " ir " << LeftoverJuice(litersX) << std::endl;

	// Pradiniai duomenys: 21
	litersX = 21;

	// Apskaiciuojam pilnu indu ir likusiu sulciu kieki 
	std::cout << "Pradiniai duomenys: " << litersX << " Rezultatas: " << JuiceJar(litersX) << " ir " << LeftoverJuice(litersX) << std::endl;

	// Pradiniai duomenys: 4
	litersX = 4;

	// Apskaiciuojam pilnu indu ir likusiu sulciu kieki 
	std::cout << "Pradiniai duomenys: " << litersX << " Rezultatas: " << JuiceJar(litersX) << " ir " << LeftoverJuice(litersX) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
void Breakdown(int number)
{
	// Uzduotyje neparasyta kad butina atlikti skaiciavimus :P
	// Paverciam inta i stringa
	std::string str = std::to_string(number);

	// Iteruojam per stringa
	for (int i = 0; i < str.length(); i++)
	{
		// Atspausdinam kiekviena skaiciu atskirta tarpeliu
		std::cout << str[i] << " ";
	}

	// Uzbaigiam eilute
	std::cout << std::endl;
}

int LandingHour(int a, int b, int c)
{
	// Paverciam valandas i minutes
	int minutes = a * 60 + b;

	// Apskaiciuojam kada lektuvas nusileis ir paverciam viska atgal i valandas.
	int landTime = (minutes + c) / 60;

	if (landTime >= 24)
		landTime %= 24;

	// Grazinam rezultata
	return landTime;
}

int LandingMinute(int a, int b, int c)
{
	// Paverciam valandas i minutes
	int minutes = a * 60 + b;

	// Apskaiciuojam kada lektuvas nusileis.
	int landTime = (minutes + c) % 60;

	// Grazinam rezultata
	return landTime;
}

void ReverseBreakdown(int number)
{
	// Uzduotyje neparasyta kad butina atlikti skaiciavimus :P
	// Paverciam inta i stringa
	std::string str = std::to_string(number);

	// Iteruojam per stringa is galo
	for (int i = str.length() - 1; i >= 0; i--)
	{
		// Atspausdinam kiekviena skaiciu atskirta tarpeliu
		std::cout << str[i] << " ";
	}

	// Uzbaigiam eilute
	std::cout << std::endl;
}

int JuiceJar(int liters)
{
	return liters / 5; // Apskaiciuojam kiek bus pilnu indu ir grazinam rezultata
}

int LeftoverJuice(int liters)
{
	return liters % 5; // Apskaiciuojam kiek litru sulciu liks ir grazinam rezultata
}