// Darba atliko: Edvinas Bureika
// 1, 2 ir 3 uzd praleidau, nes jos kartojasi
#include <iostream>

// 1uzd viesieji kintamieji
int harvestedBoxesN;
int soldBoxesM;
int tradingDaysD;
int bigBoxCapacityT;

// 2uzd viesieji kintamieji
int totalFishWeightK;
int aquariumCapacityN;

// 3uzd
int candiesN;
int eatenCandiesM;
int passedDaysK;
int candyPortionMV;

// Metodu deklaracijos
int BigAppleBoxes(int harvestedBoxes, int soldBoxes, int tradingDays, int bigBoxCapacity);
int SmallAppleBoxes(int harvestedBoxes, int soldBoxes, int tradingDays, int bigBoxCapacity);
int FullAquariums(int totalFishWeight, int aquariumCapacity);
int LastAquarium(int totalFishWeight, int aquariumCapacity);
int Candies(int candies, int eatenCandies, int passedDays, int candyPortion);
int FriendCandies(int candies, int eatenCandies, int passedDays, int candyPortion);

int main()
{
	//
	// 4 UZD
	//

	// Pradiniai duomenys 20, 11, 4 ir 5
	harvestedBoxesN = 20;
	soldBoxesM = 11;
	tradingDaysD = 4;
	bigBoxCapacityT = 5;

	// Apskaiciuojam kiek bus dideliu deziu ir atspausdinam
	std::cout << "Pradiniai duomenys: " << harvestedBoxesN << ", " << soldBoxesM << ", " << tradingDaysD << " ir " << bigBoxCapacityT << " Rezultatas: " << BigAppleBoxes(harvestedBoxesN, soldBoxesM, tradingDaysD, bigBoxCapacityT) << std::endl;

	// Apskaiciuojam kiek bus mazu deziu ir atspausdinam
	std::cout << "Pradiniai duomenys: " << harvestedBoxesN << ", " << soldBoxesM << ", " << tradingDaysD << " ir " << bigBoxCapacityT << " Rezultatas: " << SmallAppleBoxes(harvestedBoxesN, soldBoxesM, tradingDaysD, bigBoxCapacityT) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti
	std::cout << "-----------------------------------" << std::endl;

	//
	// 5 UZD
	//

	// Pradiniai duomenys 130 ir 1200
	totalFishWeightK = 130;
	aquariumCapacityN = 1200;

	// Apskaiciuojam pilnu akvariumu skaiciu ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << totalFishWeightK << " ir " << aquariumCapacityN << " Rezultatas: " << FullAquariums(totalFishWeightK, aquariumCapacityN) << std::endl;

	// Apskaiciuojam paskutinio akvariumo zuvu skaiciu ir atspausdinam
	std::cout << "Pradiniai duomenys: " << totalFishWeightK << " ir " << aquariumCapacityN << " Rezultatas: " << LastAquarium(totalFishWeightK, aquariumCapacityN) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti
	std::cout << "-----------------------------------" << std::endl;

	//
	// 6 UZD
	//

	// Pradiniai duomenys 10, 3, 5 ir 4
	candiesN = 10;
	eatenCandiesM = 3;
	passedDaysK = 5;
	candyPortionMV = 4;

	// Apskaiciuojam kuriam laikui uzteks saldainiu ir kelis draugus bus galima pavaisinti. Rezultata atspausdinam.
	std::cout << "Saldainiu uzteks " << Candies(candiesN, eatenCandiesM, passedDaysK, candyPortionMV) << " dienoms ir pavaisins " << FriendCandies(candiesN, eatenCandiesM, passedDaysK, candyPortionMV) << " draugus." << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int BigAppleBoxes(int harvestedBoxes, int soldBoxes, int tradingDays, int bigBoxCapacity)
{
	// Pirma apskaiciuojam kiek deziu liko neparduota
	int unsoldBoxes = (harvestedBoxes - soldBoxes) * tradingDays;

	// Paskui sukraunam neparduuotas dezes i didesnes dezes
	int bigBoxes = unsoldBoxes / bigBoxCapacity;

	// Grazinam rezultata
	return bigBoxes;
}

int SmallAppleBoxes(int harvestedBoxes, int soldBoxes, int tradingDays, int bigBoxCapacity)
{
	// Pirma apskaiciuojam kiek deziu liko neparduota
	int unsoldBoxes = (harvestedBoxes - soldBoxes) * tradingDays;

	// Paskui paskaiciuojam kiek deziu liks neperkrauta i didesnes dezes
	int smallerBoxes = unsoldBoxes % bigBoxCapacity;

	// Grazinam rezultata
	return smallerBoxes;
}

int FullAquariums(int totalFishWeight, int aquariumCapacity)
{
	// Padeklaruojam vienos zuvies svori(gramais)
	double fishWeigth = 0.002f; // Cia mane prigavot :)

	// Apskaiciuojam zuvu skaiciu
	int fishCount = totalFishWeight / fishWeigth;

	// Zuvu skaiciu padalinam is vieno akvariuomo talpos
	int fullAquariums = fishCount / aquariumCapacity;

	// Grazinam rezultata
	return fullAquariums;
}

int LastAquarium(int totalFishWeight, int aquariumCapacity)
{
	// Padeklaruojam vienos zuvies svori(gramais)
	// Idomus faktas: jeigu pakeistume kintamojo fishWeigth duomenu tipa i float, atsakymo reiksme butu lygi 199
	double fishWeigth = 0.002; // Cia mane prigavot :)

	// Apskaiciuojam zuvu skaiciu
	int fishCount = totalFishWeight / fishWeigth;

	// Apskaiciuojam paskutinio akvariumo zuvu skaiciu
	int lastAquarium = fishCount % aquariumCapacity;

	// Grazinam rezultata
	return lastAquarium;
}

int Candies(int candies, int eatenCandies, int passedDays, int candyPortion)
{
	// Apskaiciuojam kiek saldainiu paslepta
	int hidenCandies = (candies * passedDays) - eatenCandies;

	// Apskaiciuojam keliom dienom uzteks saldainiu
	int result = hidenCandies / candyPortion - hidenCandies % candyPortion;

	// Grazinam rezultata
	return result;
}

int FriendCandies(int candies, int eatenCandies, int passedDays, int candyPortion)
{
	// Apskaiciuojam kiek saldainiu paslepta
	int hidenCandies = (candies * passedDays) - eatenCandies;

	// Apskaiciuojam keliem draugam uzteks saldainiu
	int result = hidenCandies % candyPortion;

	// Grazinam rezultata
	return result;
}