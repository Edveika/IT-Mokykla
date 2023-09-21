// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

// Trikampiu uzd viesieji kintamieji
int i;
int x;
int valueA;
int valueB;
int valueC;
int triangleCount;

// Metodu deklaracijos
bool IsTriangle(int a, int b, int c);
std::string TriangleType(int a, int b, int c);
int TriangleArea(int a, int b, int c);

int main()
{
	//
	// Uzduoties papildymas
	//

	// Iftsreamas duomenu is failu skaitymui
	std::ifstream myFile;

	// Atidarom faila su trikmapiu krastiniu informacija
	myFile.open("Trikampiai.txt");

	// Skaitom duomenis ir rasom i x
	while (myFile >> x)
	{
		// Didinam i
		i++;

		// Jeigu i = 1 (pirma krastine)
		if (i == 1)
			// Krastine A = x
			valueA = x;
		// Kitaip jeigu i = 2 (antra krastine)
		else if (i == 2)
			// Krastine B = x
			valueB = x;
		// Kitaip jeigu i = 3 (trecia krastine)
		else if (i == 3)
			// Krastine C = x
			valueC = x;
	}
	// Paprasom vartotojo ivesti kiek bus trikampiu
	//std::cout << "Iveskite trikampiu skaiciu: ";
	//std::cin >> triangleCount;

	// Ofstreamas rasymui i failus
	std::ofstream file;

	// Atidarom rezultato faila
	file.open("Rezultatas.txt");

	// Iteruojam per trikampius
	//for (int i = 1; i <= triangleCount; i++)
	//{
	// Paprasom vartotojo ivesti trikampiu krastiniu reiksmes
	//std::cout << "Iveskite krastiniu reiksmes(a, b, c): ";
	//std::cin >> valueA >> valueB >> valueC;

	// Jeigu trikampi imanoma sudeti
	if (IsTriangle(valueA, valueB, valueC))
	{
		// Irasom i faila trikampio tipa
		file << "[TRIKAMPIO TIPAS] " << TriangleType(valueA, valueB, valueC) << std::endl;
		file << "[PLOTAS] " << TriangleArea(valueA, valueB, valueC) << std::endl;
	}
	// Jeigu neimanoma
	else
		// I faila irasom, kad trikampio sudaryti neimanoma
		file << "Trikampio sudaryti neimanoma" << std::endl;
	//}

	// Uzdarom faila
	file.close();

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
bool IsTriangle(int a, int b, int c)
{
	// Jeigu trikampi imanoma sudaryti
	if (a + b > c && a + c > b && c + b > a)
		// Grazinam true(1)
		return true;
	// Jeigu neimanoma
	else
		// Grazinam false(0)
		return false;
}

std::string TriangleType(int a, int b, int c)
{
	// Jeigu a = b ir b = c
	if (a == b && b == c)
		// Trikampis bus lygiakrastis
		return "Trikampis lygiakrastis";
	// Jeigu a = b, b = c ar a = c
	else if (a == b || b == c || a == c)
		// Trikampis bus lygiasonis
		return "Trikampis lygiasonis";
	// Kitais atvejais
	else
		// Trikampis ivairiakrastis
		return "Trikampis ivairiakrastis";
}

int TriangleArea(int a, int b, int c)
{
	// Pirma apskaiciuojam s
	int s = (a + b + c) / 2;

	// Pritaikom herono formule
	float x = std::sqrtf(s * (s - a) * (s - b) * (s - c));

	// Grazinam suapvalinta skaiciu
	return (int)std::round(x);
}