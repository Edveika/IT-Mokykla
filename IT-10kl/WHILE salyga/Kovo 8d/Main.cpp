// Darba atliko: Edvinas Bureika
#include <iostream>

// savarankiskos uzd. viesieji kintamieji
int candiesM;

// Metodu deklaracijos
int Candies(int candies);

int main()
{
	//
	// SAVARANKISKA UZDUOTIS
	//

	// Pradiniai duomenys: 11 saldainiu
	candiesM = 11;

	// Apskaiciuojam keliom dienom uzteks saldaniu ir atspausdinam rezultata i ekrana
	std::cout << "Pradiniai duomenys: " << candiesM << " Saldainiu uzteks: " << Candies(candiesM) << " dienoms" << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int Candies(int candies)
{
	// Kintamasis dienu skaiciui laikyti
	int days = 0;

	// Kintamasis suvalgytu saldainiu skaiciui laikyti
	int eatenCandies = 0;

	// Ciklas vyksta tol, kol suvalgyti visi saldainiai
	while (eatenCandies + days < candies)
	{
		// Didinam dienu skaiciu
		days++;

		// Didinam suvalgytu saldainiu skaiciu, pridedant dienu skaiciu(nes kiekviena diena suvalgo daugiau negu pries tai buvusia)
		eatenCandies += days;

		// Jeigu liko mazai saldainiu
		if (eatenCandies + days < candies && candies > eatenCandies)
			// Paskutinei dienai pridedam likusius
			eatenCandies += candies - eatenCandies;
	}

	// Grazinam rezultata
	return days;
}