// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int rabbitForrestK;
int wolfForrestV;

// 2uzd viesieji kintamieji
int secondsS;
int centimeterC;
int flySpeedV;

// 3uzd viesieji kintamieji
float cropWeightG;
int yearsM;
float cropWeightForColiukeN;

// 4uzd viesieji kintamieji
int boxesN;
int vechicleSizeM;

// Metodu deklaracijos
std::string ForrestFlowers(int rabbitForrest, int wolfForrest);
std::string Speed(int seconds, int centimeters, int flySpeed);
std::string Wedding(float cropWeight, int years, float cropWeightForColiuke);
int Boxes(int boxes, int vechicleSize);

int main()
{
	//
	// 1 UZD
	// 

	// Pradiniai duomenys: 300 ir 200
	rabbitForrestK = 300;
	wolfForrestV = 200;

	// Palyginam rabbitForrestK ir wolfForrestV reiksmes, ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << rabbitForrestK << " ir " << wolfForrestV << " Rezultatas: " << ForrestFlowers(rabbitForrestK, wolfForrestV) << std::endl;

	// Pradiniai duomenys: 200 ir 300
	rabbitForrestK = 200;
	wolfForrestV = 300;

	// Palyginam rabbitForrestK ir wolfForrestV reiksmes, ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << rabbitForrestK << " ir " << wolfForrestV << " Rezultatas: " << ForrestFlowers(rabbitForrestK, wolfForrestV) << std::endl;

	// Pradiniai duomenys: 500 ir 300
	rabbitForrestK = 500;
	wolfForrestV = 300;

	// Palyginam rabbitForrestK ir wolfForrestV reiksmes, ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << rabbitForrestK << " ir " << wolfForrestV << " Rezultatas: " << ForrestFlowers(rabbitForrestK, wolfForrestV) << std::endl;

	// Pradiniai duomenys: 1337 ir 1337
	rabbitForrestK = 1337;
	wolfForrestV = 1337;

	// Palyginam rabbitForrestK ir wolfForrestV reiksmes, ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << rabbitForrestK << " ir " << wolfForrestV << " Rezultatas: " << ForrestFlowers(rabbitForrestK, wolfForrestV) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "----------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys: 1, 30 ir 5
	secondsS = 1;
	centimeterC = 30;
	flySpeedV = 5;

	// Apskaiciuojam tarakono greiti ir palyginam su muses. Atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << secondsS << ", " << centimeterC << " ir " << flySpeedV << " Rezultatas: " << Speed(secondsS, centimeterC, flySpeedV) << std::endl;

	// Pradiniai duomenys: 1, 30 ir 5
	secondsS = 1;
	centimeterC = 150;
	flySpeedV = 1;

	// Apskaiciuojam tarakono greiti ir palyginam su muses. Atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << secondsS << ", " << centimeterC << " ir " << flySpeedV << " Rezultatas: " << Speed(secondsS, centimeterC, flySpeedV) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "----------------------" << std::endl;

	//
	// 3 UZD
	//

	// Pradiniai duomenys: 48.5, 10 ir 0.1
	cropWeightG = 48.5f;
	yearsM = 10.f;
	cropWeightForColiukeN = 0.1f;

	// Apskaiciuojam ar kurmiui apsimoka vesti coliuke ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << cropWeightG << ", " << yearsM << " ir " << cropWeightForColiukeN << " Rezultatas: " << Wedding(cropWeightG, yearsM, cropWeightForColiukeN) << std::endl;

	// Pradiniai duomenys: 48.5, 10 ir 0.005
	cropWeightG = 48.5f;
	yearsM = 10.f;
	cropWeightForColiukeN = 0.005f;

	// Apskaiciuojam ar kurmiui apsimoka vesti coliuke ir atspausdinam rezultata
	std::cout << "Pradiniai duomenys: " << cropWeightG << ", " << yearsM << " ir " << cropWeightForColiukeN << " Rezultatas: " << Wedding(cropWeightG, yearsM, cropWeightForColiukeN) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti rezultata
	std::cout << "----------------------" << std::endl;

	// 
	// 4 UZD
	//

	// Pradiniai duomenys: 100 ir 14
	boxesN = 100;
	vechicleSizeM = 14;

	// Apskaiciuojam reisu skaiciu ir ji atspausdinam
	std::cout << "Pradiniai duomenys: " << boxesN << " ir " << vechicleSizeM << " Rezultatas: " << Boxes(boxesN, vechicleSizeM) << std::endl;

	// Pradiniai duomenys: 98 ir 14
	boxesN = 98;
	vechicleSizeM = 14;

	// Apskaiciuojam reisu skaiciu ir ji atspausdinam
	std::cout << "Pradiniai duomenys: " << boxesN << " ir " << vechicleSizeM << " Rezultatas: " << Boxes(boxesN, vechicleSizeM) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
std::string ForrestFlowers(int rabbitForrest, int wolfForrest)
{
	// Jiegu pas kiskius maziau nei pas vilkus
	if (rabbitForrest < wolfForrest)
		// Suteikiam result reiskia, kad pas kiskius maziau
		return "Pas kiskius maziau";
	//Jeigu pas kiskius daugiau nei pas vilkus
	else if (rabbitForrest > wolfForrest)
		// Suteikiam result reiskia, kad pas vilkus maziau
		return "Pas vilkus maziau";
	// Jeigu virsuje parasytos salygos "grazina 0", reiskiasi lygu :)
	else
		// Suteikiam result reiskia, kad rezultatas lygus :)
		return "Pas abu po lygiai";
}

std::string Speed(int seconds, int centimeters, int flySpeed)
{
	// Pirmiausiai apskaiciuojam tarakono greiti (m/s)
	float cockrochSpeed = seconds * (centimeters * 0.01f);

	// Jei tarakonas greitesnis uz muse
	if (cockrochSpeed > flySpeed)
		// Rezultatas bus: tarakonas greitesnis uz muse :D
		return "Tarakonas greitesnis";
	// Jei tarakonas letesnis uz muse
	else if (cockrochSpeed < flySpeed)
		// Rezultatas: muse greitesne 
		return "Muse greitesne";
	// Jeigu nei viena salyga is virsaus nera "teisinga"
	else
		// Rezultatas: lygu :)
		return "Greitis vienodas";
}

std::string Wedding(float cropWeight, int years, float cropWeightForColiuke)
{
	// Apskaiciuojam kiek Coliuke grudu suvalgys per tuos metus(m)
	float eatenCrops = 0.5f * (years * 365.25f);

	// Apskaiciuojam vieno grudo svori ir paverciam i kilogramus
	float singleCropWeigth = (cropWeight / 1000.f) * 0.001f;

	// Apskaiciuojam kiek kilogramu grudu suvalgys coliuke
	float coliukesEatenCropsWeigth = eatenCrops * singleCropWeigth;

	// Jeigu coliuke suvalgys maziau nei N kg grudu
	if (coliukesEatenCropsWeigth < cropWeightForColiuke)
		// Kurmiui vesti apsimoka
		return "Vesti apsimoka";
	// Jeigu coliuke suvalgys daugiau kaip N kg grudu
	else if (coliukesEatenCropsWeigth > cropWeightForColiuke)
		// Vesti neapsimoka
		return "Vesti neapsimoka";
	// Kitaip jeigu coliuke suvalgys viska
	else
		// Apsimoka, bet kurmiui nieko neliks
		return "Apsimoka, bet kurmiui teks badauti";
}

int Boxes(int boxes, int vechicleSize)
{
	// Apskaiciuojam kiek kartu reikes vezti
	int trips = boxes / vechicleSize;

	// Jeigu liekana nera daugiau uz k ir lygi 0, reiskiasi kad liko tik vienas vezimas
	if (boxes % vechicleSize < trips && boxes % vechicleSize != 0)
		// Pridedam 1 vezima
		return trips += 1;
	// Kitaip jeigu daugiau arba lygu
	else if (boxes % vechicleSize >= trips)
		// Liekana dalinam is masinos deziu talpos ir rezultata pridedam prie vezimu skaiciaus
		return trips += (boxes % vechicleSize) / vechicleSize; // Cia gali buti problemu...
	// Jei liekanos nera
	else
		// Tiesiog grazinam rezultata
		return trips;
}