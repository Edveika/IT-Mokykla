// Darba atliko: Edvinas Bureika
#include <iostream>

// 2uzd viesieji kintamieji
int luckyTickets = 0;

// Metodu deklaracijos
void LuckyBussTickets(int x);

int main()
{
	//
	// 1 UZD
	//

	// Totalus kedziu skaicius
	int s = 0;

	// Pirmos eiles kedziu skaicius
	int k = 8;

	// Iteruojam per eiles
	for (int n = 1; n <= 3; n++)
	{
		// "Pirmoje eileje stoves k kedziu, o kiekvienoje kitoje eileje – 2 kedemis daugiau, negu pries tai buvusioje"
		// Taigi pirma eile bus = 8
		// Antra eile bus irgi = 8
		// Ir trecia bus = 10, nes 2 kedemis daugiau uz praeita eile
		if (n > 2)
			k += 2;

		// Apskaiciuojam s(totalu kedziu skaiciu)
		s = k * n;

		// Atspausdinam n ir s reiksmes i konsole
		std::cout << "Eiles: " << n << " Kedziu skaicius: " << s << std::endl;
	}

	// Atskiriam uzduotis eilute, kad butu lengviau skaityti rezultata
	std::cout << "--------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Iteruojam per autobusu bilietus
	for (int i = 170849; i <= 189965; i++)
		// Tikrinam kurie is ju bus laimingi ir isvedam i ekrana
		LuckyBussTickets(i);

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
void LuckyBussTickets(int x)
{
	// Isskaidyta x surasysim i digit arrayju
	int digit[6];

	// Iteruojam per x is galo
	for (int i = 5; i >= 0; i--)
	{
		// Surasom skaicius i digit arrayju
		digit[i] = x % 10;
		x /= 10;
	}

	// Tikrinam ar 1 ir 4 skaiciai lygus 3
	if (digit[0] == 3 && digit[3] == 3)
	{
		// Atspausdinam i konsole, kad bilietas laimingas
		std::cout << "[LAIMINGAS BILIETAS]" << std::endl;

		// Atspausdinam bilieto nr.
		std::cout << digit[0] << " ir " << digit[3] << std::endl;
		std::cout << digit[1] << " ir " << digit[4] << std::endl;
		std::cout << digit[2] << " ir " << digit[5] << std::endl;

		// Pridedam 1 prie laimingu bilietu skaiciaus
		luckyTickets += 1;

		// Atspausdinam laimingu bilietu skaiciu
		std::cout << "Laimingi bilietai: " << luckyTickets << std::endl;

		// Atskiriam viska eilute, kad butu aiskiau
		std::cout << "---------------------------" << std::endl;
	}

	// Tikrinam ar 2 ir 5 skaiciai lygus 3
	else if (digit[1] == 3 && digit[4] == 3)
	{
		// Atspausdinam i konsole, kad bilietas laimingas
		std::cout << "[LAIMINGAS BILIETAS]" << std::endl;

		// Atspausdinam bilieto nr.
		std::cout << digit[0] << " ir " << digit[3] << std::endl;
		std::cout << digit[1] << " ir " << digit[4] << std::endl;
		std::cout << digit[2] << " ir " << digit[5] << std::endl;

		// Pridedam 1 prie laimingu bilietu skaiciaus
		luckyTickets += 1;

		// Atspausdinam laimingu bilietu skaiciu
		std::cout << "Laimingi bilietai: " << luckyTickets << std::endl;

		std::cout << "---------------------------" << std::endl;
	}

	// Tikrinam ar 3 ir 6 skaiciai lygus 3
	else if (digit[2] == 3 && digit[5] == 3)
	{
		// Atspausdinam i konsole, kad bilietas laimingas
		std::cout << "[LAIMINGAS BILIETAS]" << std::endl;

		// Atspausdinam bilieto nr.
		std::cout << digit[0] << " ir " << digit[3] << std::endl;
		std::cout << digit[1] << " ir " << digit[4] << std::endl;
		std::cout << digit[2] << " ir " << digit[5] << std::endl;

		// Pridedam 1 prie laimingu bilietu skaiciaus
		luckyTickets += 1;

		// Atspausdinam laimingu bilietu skaiciu
		std::cout << "Laimingi bilietai: " << luckyTickets << std::endl;

		// Atskiriam viska eilute, kad butu aiskiau
		std::cout << "---------------------------" << std::endl;
	}
}