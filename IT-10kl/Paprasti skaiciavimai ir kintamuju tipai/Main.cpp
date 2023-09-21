// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int studentsN;
int papperM;

// 2uzd viesieji kintamieji
int hoursX;
int minutesY;

// 3uzd viesieji kintamieji
int lengthX;
int heightY;
float price;

// Metodu deklaracijos
int Papper(int students, int papper);
float PapperV2(int students, int papper);
int Minutes(int hours, int minutes);
int Seconds(int hours, int minutes);
float HouseArea(int length, int heigth);
float Price(int length, int heigth, float m2Kaina);
int Multiply(int a, int b);

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys 20 ir 10
	studentsN = 20;
	papperM = 10;
	std::cout << "Pradiniai duomenys: " << studentsN << " ir " << papperM << " Rezultatas: " << Papper(studentsN, papperM) << std::endl;

	// Pradiniai duomenys 10 ir 15
	studentsN = 10;
	papperM = 15;
	std::cout << "Pradiniai duomenys: " << studentsN << " ir " << papperM << " Rezultatas: " << Papper(studentsN, papperM) << std::endl;

	// Pradiniai duomenys 4 ir 8
	studentsN = 4;
	papperM = 8;
	std::cout << "Pradiniai duomenys: " << studentsN << " ir " << papperM << " Rezultatas: " << Papper(studentsN, papperM) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "------------------------------" << std::endl;

	//
	// 1 EXTRA UZD
	//

	// Pradiniai duomenys 20 ir 10
	studentsN = 20;
	papperM = 10;
	std::cout << "Pradiniai duomenys: " << studentsN << " ir " << papperM << " Rezultatas: " << PapperV2(studentsN, papperM) << std::endl;

	// Pradiniai duomenys 10 ir 15
	studentsN = 10;
	papperM = 15;
	std::cout << "Pradiniai duomenys: " << studentsN << " ir " << papperM << " Rezultatas: " << PapperV2(studentsN, papperM) << std::endl;

	// Pradiniai duomenys 4 ir 8
	studentsN = 4;
	papperM = 8;
	std::cout << "Pradiniai duomenys: " << studentsN << " ir " << papperM << " Rezultatas: " << PapperV2(studentsN, papperM) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "------------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys 3 ir 5
	hoursX = 3;
	minutesY = 5;
	std::cout << "Minutes = " << Minutes(hoursX, minutesY) << " Seconds = " << Seconds(hoursX, minutesY) << std::endl;

	// Pradiniai duomenys 5 ir 10
	hoursX = 5;
	minutesY = 10;
	std::cout << "Minutes = " << Minutes(hoursX, minutesY) << " Seconds = " << Seconds(hoursX, minutesY) << std::endl;

	// Pradiniai duomenys 20 ir 55
	hoursX = 20;
	minutesY = 55;
	std::cout << "Minutes = " << Minutes(hoursX, minutesY) << " Seconds = " << Seconds(hoursX, minutesY) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "------------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pradiniai duomenys 10, 1 ir 5
	lengthX = 10;
	heightY = 1;
	price = 5;
	std::cout << "Pradiniai duomenys: " << lengthX << ", " << heightY << " ir " << price  << " Kaina: " << Price(lengthX, heightY, price) << std::endl;

	// Pradiniai duomenys 5, 3 ir 25
	lengthX = 5;
	heightY = 3;
	price = 25;
	std::cout << "Pradiniai duomenys: " << lengthX << ", " << heightY << " ir " << price << " Kaina: " << Price(lengthX, heightY, price) << std::endl;

	// Pradiniai duomenys 10, 5 ir 15
	lengthX = 10;
	heightY = 5;
	price = 15;
	std::cout << "Pradiniai duomenys: " << lengthX << ", " << heightY << " ir " << price << " Kaina: " << Price(lengthX, heightY, price) << std::endl;

	// Idomus faktas: kodo blokas main() 0 grazina automatiskai, todel tai rasyti beprasmiska :)
	return 0; // Grazinam 0
}

// Metodu implementacijos
int Papper(int students, int papper)
{
	return Multiply(students, papper); // Dauginam mokinius is lapu ir grazinam rezultata
}

float PapperV2(int students, int papper)
{
	return Multiply(students, papper) * 0.15; // Dauginam mokinius is lapu ir tada lapu kieki is kainos
}

int Minutes(int hours, int minutes)
{
	return hours * 60 + minutes; // Konvertuojam valandas i minutes ir pridedam likusias minutes, tada grazinam rezultata
}

float HouseArea(int length, int heigth)
{
	return length * heigth; // Dauginam auksti is plocio ir gaunam plota (M)
}

float Price(int length, int heigth, float m2Kaina)
{
	return (HouseArea(length, heigth) + HouseArea(length, heigth) * 5 / 100) * m2Kaina; // Dauginam plota is m2 kainos, pridedam 5% ir grazinam kaina
}

int Seconds(int hours, int minutes)
{
	return hours * 3600 + minutes * 60; // Konvertuojam valandas ir minutes i sekundes, tada grazinam rezultata
}

int Multiply(int a, int b)
{
	return a * b; // Dauginam a is b ir grazinam rezultata
}