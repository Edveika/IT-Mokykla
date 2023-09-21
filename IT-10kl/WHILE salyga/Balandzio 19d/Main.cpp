// Darba atliko: Edvinas Bureika
// Pastaba: patartina kompiliuoti release x86 rezimu
#include <iostream>
#include <string>

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys: 60203
	int number = 60203;

	// Pasiverciam skaiciu i teksta
	std::string str = std::to_string(number);

	// Atspausdinam pirma skaitmeni
	std::cout << "Skaiciaus " << number << " pirmas skaitmuo: " << str[0] << std::endl;

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti
	std::cout << "-------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys su pradinem reiksmem
	int a = 60203;
	int b = 432;

	// Isskaidyta a surasytas i digit1 arrayju
	int digit1[5];

	// Isskaidyta b surasytas i digit2 arrayju
	int digit2[3];

	int i = 5;
	int j = 3;
	int k = 0;

	while (i >= 0)
	{
		// Mazinam i, nes iteruojam is galo
		i--;

		// Surasom skaicius i digit arrayju
		digit1[i] = a % 10;
		a /= 10;
	}

	while (j >= 0)
	{
		// Mazinam i, nes iteruojam is galo
		j--;

		// Surasom skaicius i digit arrayju
		digit2[j] = b % 10;
		b /= 10;
	}

	std::cout << "Rezultatas: " << digit1[0] + digit2[0] << std::endl;

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti
	std::cout << "-------------------------" << std::endl;

	//
	// 3 UZD
	//

	//
	// Sita uzduoti realiai nukopijavau nuo interneto, nes primirses apie pirminiu ir sudetiniu skaiciu...
	//
	
	// Iteracijai
	int l;

	// Skaiciu ivedimui
	int n;

	// Boolas kuris zymi, kad skaicius pirminis
	bool bIsPrime = true;

	// Paprasome vartotojo ivesti skaiciu
	std::cout << "Iveskite skaiciu: ";
	std::cin >> n;

	// Jeigu skaicius lygus 1 arba 0 jis nera pirminis
	if (n == 0 || n == 1)
		bIsPrime = false;
	// Jeigu nei 0, nei 1
	else 
	{
		// Iteravimas per n
		for (l = 2; l <= n / 2; l++) 
		{
			// Tikrinam ar yra liekana
			if (n % l == 0) 
			{
				// Jei nera, skaicius nera pirminis
				bIsPrime = false;

				// Uzbaigiam cikla
				break;
			}
		}
	}

	// Jei skaicius pirminis
	if (bIsPrime)
		// Isvedam i ekrana, kad jis pirminis
		std::cout << "Skaicius pirminis" << std::endl;
	// Kitaip
	else
		// Skaicius sudetinis
		std::cout << "Skaicius sudetinis" << std::endl;

	// Grazinam 0
	return 0;
}