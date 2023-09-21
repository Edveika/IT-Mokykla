// Darba atliko: Edvinas Bureika
#include <iostream>

int main()
{
	//
	// 3 UZD is failo "Ciklas FOR udaviniai" (antra praleidau nes atlikau praeita pamoka)
	//

	int m; // Metu pradzia
	int n; // Metu pabaiga

	// Ivedam m reiksme
	std::cout << "Iveskite m reiksme: ";
	std::cin >> m;

	// Ivedam n reiksme
	std::cout << "Iveskite n reiksme: ";
	std::cin >> n;
	
	// Ivedam teksta i konsole
	std::cout << "Keliamieji metai: ";

	// Iteruojam per pasirinkta metu tarpa
	for (int i = m; i <= n; i++)
	{
		// Tikrinam ar nelieka liekana padalinus is 4
		if (i % 4 == 0)
			// Atspausdinam metus kuriuose nelieka liekanos
			// PASTABA: Pasitikrinkite uzduoti rodo, kad atsakyme turi buti 1904 ir 1908, bet as gavau ir 1900. 1900 is 4 dalinasi be liekanos, todel nemanau kad tai yra klaida
			std::cout << i << ", ";
	}

	// Grazinam 0
	return 0;
}