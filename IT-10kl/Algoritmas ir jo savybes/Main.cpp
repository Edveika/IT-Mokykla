// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int length;
int height;

// 2uzd viesieji kintamieji
int shopX;
int shopY;
int price;

// 3uzd viesieji kintamieji
int x;
int n;

// Metodu deklaracijos
int Masks(int shopX, int shopY, int price);
int Candies(int friends, int candies);
int Multiply(int a, int b);
int Add(int a, int b);

int main()
{
	//
	// 1 UZD.
	//

	// Pradiniai duomenys 5 ir 6
	length = 5;
	height = 6;
	std::cout << "Pradiniai duomenys: " << length << " ir " << height << std::endl << "Rezultatas: " << Multiply(length, height) << std::endl;

	// Pradiniai duomenys 10 ir 15
	length = 10;
	height = 15;
	std::cout << "Pradiniai duomenys: " << length << " ir " << height << std::endl << "Rezultatas: " << Multiply(length, height) << std::endl;

	// Pradiniai duomenys 4 ir 8
	length = 4;
	height = 8;
	std::cout << "Pradiniai duomenys: " << length << " ir " << height << std::endl << "Rezultatas: " << Multiply(length, height) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "------------------------------------" << std::endl;

	//
	// 2 UZD.
	//

	// Pradiniai duomenys 3, 4 ir 2
	shopX = 3;
	shopY = 4;
	price = 2;
	std::cout << "Pradiniai duomenys: " << shopX << " , " << shopY << "ir " << "price" << std::endl << "Rezultatas: " << Masks(shopX, shopY, price) << std::endl;

	// Pradiniai duomenys 5, 7 ir 1
	shopX = 5;
	shopY = 7;
	price = 1;
	std::cout << "Pradiniai duomenys: " << shopX << " , " << shopY << "ir " << "price" << std::endl << "Rezultatas: " << Masks(shopX, shopY, price) << std::endl;

	// Pradiniai duomenys 8, 7 ir 2
	shopX = 8;
	shopY = 7;
	price = 2;
	std::cout << "Pradiniai duomenys: " << shopX << " , " << shopY << "ir " << "price" << std::endl << "Rezultatas: " << Masks(shopX, shopY, price) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "------------------------------------" << std::endl;

	//
	// 3 UZD.
	//

	// Pradiniai duomenys 5 ir 4
	x = 5;
	n = 4;
	std::cout << "Pradiniai duomenys: " << x << " ir " << n << std::endl << "Rezultatas: " << Candies(x, n) << std::endl;

	// Pradiniai duomenys 10 ir 3
	x = 10;
	n = 3;
	std::cout << "Pradiniai duomenys: " << x << " ir " << n << std::endl << "Rezultatas: " << Candies(x, n) << std::endl;

	// Pradiniai duomenys 3 ir 10
	x = 3;
	n = 10;
	std::cout << "Pradiniai duomenys: " << x << " ir " << n << std::endl << "Rezultatas: " << Candies(x, n) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int Masks(int shopX, int shopY, int price)
{
	// Sudedam kaukiu kieki
	int maskCount = Add(shopX, shopY);

	// Dauginam kaukiu kieki is kainos
	return Multiply(maskCount, price); // Grazinam rezultata
}

int Candies(int friends, int candies)
{
	// Saldainiai draugams
	int friendCandies = Multiply(friends, candies); // Dauginam draugus is saldainiu

	// Petriuko saldainiai
	int petriukoCandies = Multiply(candies, 2); // Dauginam Petriuko saldainius is 2, nes Petriukas gobsus

	// Sudedam draugu ir petriuko saldainius
	return Add(friendCandies, petriukoCandies); // Grazinam rezultata
}

int Multiply(int a, int b)
{
	return a * b; // Dauginam a is b ir grazinam rezultata
}

int Add(int a, int b)
{
	return a + b; // Sudedam a su b ir grazinam rezultata
}