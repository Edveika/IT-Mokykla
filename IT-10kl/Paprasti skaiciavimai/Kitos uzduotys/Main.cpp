// Darba atliko: Edvinas Bureika
#include <iostream>
#include <iomanip>
#include <cmath>

// Deklaruojam pi ir jo reiksme
#define PI 3.14

// Metodu deklaracijos
double OrangeVolume(double orangeDiameter, double peelThickness);
float WaterVolume(float cubeLength, float circleRadius);
float CubeVolume(float cubeLength);
float CircleVolume(float circleRadius);

int main()
{
	//
	// 4.1 APELSINAS
	//

	// Apskaiciuojam apelsino turi ir atspausdinam(du skaiciai po kablelio)
	std::cout << std::setprecision(5) << OrangeVolume(10, 1) << std::endl;
	std::cout << std::setprecision(5) << OrangeVolume(15, 1.5) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti
	std::cout << "-----------------------------" << std::endl;

	//
	// 4.2 VANDENS TURIS
	//

	// Apskaiciuojam kubo turi ir atspausdinam
	std::cout << CubeVolume(4) << std::endl;

	// Apskaiciuojam rutulio turi ir atspausdinam(du skaiciai po kablelio)
	std::cout << std::setprecision(4) << CircleVolume(4) << std::endl;

	// Apskaiciuojam vandens turi ir atspausdinam(du skaiciai po kablelio)
	std::cout << std::setprecision(4) << WaterVolume(4, 4) << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
double OrangeVolume(double orangeDiameter, double peelThickness)
{
	// Apskaiciuojam istrizaines ilgi
	// Del nepaiskinamu priezasciu cia turi buti int kintamasis, kitaip bus klaidu. Speju todel, kad std::pow argumentas nori into.
	int orangeSoftSide = orangeDiameter - peelThickness;

	// Apskaiciuojam minkstaji turi naudojant apskritimo turio formule
	// LABAI svarbu po 4 ir 3 padeti .f, kitaip bus klaidu (padalinus gausis 1, o ne 1,33, nes int gali grazinti tik sveika skaiciu)
	double result = 4.f / 3.f * PI * std::pow(orangeSoftSide / 2, 3); 

	// Grazinam rezultata
	return result;
}

float WaterVolume(float cubeLength, float circleRadius)
{
	return CubeVolume(cubeLength) - CircleVolume(circleRadius); // Is kubo turio atimam rutulio turi ir gaunam likusi vandens turi. Grazinam rezultata
}

float CubeVolume(float cubeLength)
{
	return std::pow(cubeLength, 3); // Apskaiciuojam kubo turi su kubo turio skaiciavimo formule. Grazinam rezultata
}

float CircleVolume(float circleRadius)
{
	return 4.f / 3.f * PI* std::pow(circleRadius / 2, 3); // Apskaiciuojam rutulio turi su rutulio turio skaiciavimo formule. Grazinam rezultata
}