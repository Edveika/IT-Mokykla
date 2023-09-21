// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int daysD[] = { 15, 21, 36 };

// 2uzd viesieji kintamieji
int kidsN;
int cansdiesM;

// 3uzd viesieji kintamieji
int balloonsN;
int friendsD;
int poppedBalloonsK;

// Metodu deklaracijos
int DaysToWeeks(int days);
int KidCandies(int kids, int candies);
int TeacherCandies(int kids, int candies);
int BalloonsForAndrius(int balloons, int friends, int poppedBalloons);
int BalloonsForFriends(int balloons, int friends, int poppedBalloons);

int main()
{
	//
	// 1 UZD
	//

	// Truputeli mandresnis ir maziau vietos uzimantis atspausdinimas :)
	// Iteruojam per daysD masyva(kuriame laikomos pradines reksmes)
	for (int i = 0; i < (sizeof daysD / sizeof daysD[0]); i++)
		// Apskaiciuojam ir atspausdinam rezultata
		std::cout << "Pradiniai duomenys: " << daysD[i] << " Rezultatas: " << DaysToWeeks(daysD[i]) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityt
	std::cout << "-------------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys 7 ir 23
	kidsN = 7;
	cansdiesM = 23;

	// Apskaiciuojam vaiku saldainius ir atspausdinam
	std::cout << "Pradiniai duomenys: " << kidsN << " ir " << cansdiesM << " Rezultatas: " << KidCandies(kidsN, cansdiesM) << std::endl;

	// Apskaiciuojam mokytojos saldainius ir atspausdinam
	std::cout << "Pradiniai duomenys: " << kidsN << " ir " << cansdiesM << " Rezultatas: " << TeacherCandies(kidsN, cansdiesM) << std::endl;

	// Pradiniai duomenys 10 ir 23
	kidsN = 10;
	cansdiesM = 23;

	// Apskaiciuojam vaiku saldainius ir atspausdinam
	std::cout << "Pradiniai duomenys: " << kidsN << " ir " << cansdiesM << " Rezultatas: " << KidCandies(kidsN, cansdiesM) << std::endl;

	// Apskaiciuojam mokytojos saldainius ir atspausdinam
	std::cout << "Pradiniai duomenys: " << kidsN << " ir " << cansdiesM << " Rezultatas: " << TeacherCandies(kidsN, cansdiesM) << std::endl;

	// Pradiniai duomenys 15 ir 59
	kidsN = 15;
	cansdiesM = 59;

	// Apskaiciuojam vaiku saldainius ir atspausdinam
	std::cout << "Pradiniai duomenys: " << kidsN << " ir " << cansdiesM << " Rezultatas: " << KidCandies(kidsN, cansdiesM) << std::endl;

	// Apskaiciuojam mokytojos saldainius ir atspausdinam
	std::cout << "Pradiniai duomenys: " << kidsN << " ir " << cansdiesM << " Rezultatas: " << TeacherCandies(kidsN, cansdiesM) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityt
	std::cout << "-------------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pradiniai duomenys 77, 7 ir 3
	balloonsN = 77;
	friendsD = 7;
	poppedBalloonsK = 3;
	
	// Apskaiciuojam draugu, andriaus balionus ir atspausdinam
	std::cout << "Pradiniai duomenys: " << balloonsN << ", " << friendsD << " ir " << poppedBalloonsK <<"Balionai draugams: " << BalloonsForFriends(balloonsN, friendsD, poppedBalloonsK) << " Balionai andriui: " << BalloonsForAndrius(balloonsN, friendsD, poppedBalloonsK) << std::endl;

	// Pradiniai duomenys 30, 6 ir 3
	balloonsN = 30;
	friendsD = 6;
	poppedBalloonsK = 3;

	// Apskaiciuojam draugu, andriaus balionus ir atspausdinam
	std::cout << "Pradiniai duomenys: " << balloonsN << ", " << friendsD << " ir " << poppedBalloonsK << "Balionai draugams: " << BalloonsForFriends(balloonsN, friendsD, poppedBalloonsK) << " Balionai andriui: " << BalloonsForAndrius(balloonsN, friendsD, poppedBalloonsK) << std::endl;
	
	// Pradiniai duomenys 50, 8 ir 10
	balloonsN = 50;
	friendsD = 8;
	poppedBalloonsK = 10;

	// Apskaiciuojam draugu, andriaus balionus ir atspausdinam
	std::cout << "Pradiniai duomenys: " << balloonsN << ", " << friendsD << " ir " << poppedBalloonsK << "Balionai draugams: " << BalloonsForFriends(balloonsN, friendsD, poppedBalloonsK) << " Balionai andriui: " << BalloonsForAndrius(balloonsN, friendsD, poppedBalloonsK) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int DaysToWeeks(int days)
{
	return days / 7; // Dienas paverciam i savaites ir grazinam rezultata
}

int KidCandies(int kids, int candies)
{
	return candies / kids; // Dalinam saldainius vaikams ir grazinam rezultata
}

int TeacherCandies(int kids, int candies)
{
	return candies - (KidCandies(kids, candies) * kids); // Is saldainiu skaiciaus atimam mokiniu saldainiu skaiciu ir likusius saldainius atiduodam mokytojai. Grazinam rezultata
}

int BalloonsForAndrius(int balloons, int friends, int poppedBalloons)
{
	// Sita uzduotis kol kas buvo idomiausia ir uztruko ilgiausiai, buvau pamirses, kad operacija '/' grazina tik sveikaja dali(reikejo naudoti '%', kad gauciau liekana).
	return (balloons - poppedBalloons) / (friends + 1) + (balloons - poppedBalloons) % (friends + 1); // Is balionu skaiciaus atimam sprogusius balionus, taip gaudami sveiku balionu skaiciu. Dalinam sveiku balionu skaiciu is vaiku(+1, nes kartu su Andrium) ir pridedam liekana, taip gaudami Andriaus balionus. Grazinam rezultata
}

int BalloonsForFriends(int balloons, int friends, int poppedBalloons)
{
	return (balloons - poppedBalloons) / (friends + 1); // Is balionu skaiciaus atimam susprogusius balionus ir gaunam sveiku balionu skaiciu. Dalinam sveiku balionu skaiciu is vaiku skaiciaus + 1(kartu su Andrium)
}