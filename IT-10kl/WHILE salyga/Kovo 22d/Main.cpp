// Darba atliko: Edvinas Bureika
#include <iostream>
#include <iomanip>

float Degree(float x, int k);

int main()
{
	// Pakeliam laipsni ir atspausdinam rezultata su dviem skaiciais po kablelio(kad ir kam to reikia)
	printf("%.2f",Degree(5.00f, 2));

	// Grazinam 0
	return 0;
}

float Degree(float x, int k)
{
	// I kintamasis, kuris bus didinamas while cikle
	int i = 0;

	// Kintamasis rezultatui laikyti su reiksme 1
	float res = 1.00f;

	// Kol i yra mazesnis uz k(laipsni)
	while (i < k)
	{
		// Didinam i
		i++;

		// i = 1
		// i = 2

		// Keliam laipsniu
		// 1 * 5 = 5
		// 5 * 5 = 25
		res *= x;
	}

	// Grazinam rezultata
	return res;
}