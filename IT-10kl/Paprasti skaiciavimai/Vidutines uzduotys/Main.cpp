// Darba atliko: Edvinas Bureika
#include <iostream>

// Vector2 deklaracija
// PASTABBA: c++(greiciausiai ir kitose kalbose) koordinates nera laikomos palaidais kintamaisiais (pvz: x1 y1, x2, y2), tam yra naudojamos vectoriu strukturos. Galima laikyti ir palaidai, bet tiesiog tokia tvarka.
struct Vec2 { int x, y; };

// 6uzd viesieji kintamieji
Vec2 coord1;
Vec2 coord2;

// Metodu deklaracijos
int AverageVilniusPassengers(int passengers, int notVilniusPassengers, int trainVagons);
int RectangleArea(Vec2 coordinate1, Vec2 coordinate2);
int RectangleCircumference(Vec2 coordinate1, Vec2 coordinate2);
float CockroachSpeed(float speed);
int CentWeight(int fine);

int main()
{
	//
	// 5 UZD
	//

	// Pradiniai duomenys 100, 20 ir 4
	std::cout << "Rezultatas: " << AverageVilniusPassengers(100, 20, 4) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti
	std::cout << "--------------------------" << std::endl;

	//
	// 6 UZD
	//

	// Gaunam pirmosios koordinates reiksmes
	std::cout << "Iveskite pirmaja koordinate (X ; Y)" << std::endl;
	std::cin >> coord1.x;
	std::cin >> coord1.y;

	// Gaunam antrosios koordinates reiksmes
	std::cout << "Iveskite antraja koordinate (X ; Y)" << std::endl;
	std::cin >> coord2.x;
	std::cin >> coord2.y;

	// Apskaiciuojam plota ir atspausdinam
	std::cout << "Plotas: " << RectangleArea(coord1, coord2) << std::endl;
	std::cout << "Perimetras: " << RectangleCircumference(coord1, coord2) << std::endl;

	// Atskiriam uzduotis, kad butu lengviau skaityti
	std::cout << "--------------------------" << std::endl;

	//
	// 7 UZD
	//

	// Apskaiciuojam tarakonu greiti ir atspausidnam
	std::cout << "Tarakono greitis: " << CockroachSpeed(1.08) << "cm/s" << std::endl;

	//
	// 8 UZD
	//

	// Apskaiciuojam centu svori ir atspausidnam
	std::cout << "Centu svoris: " << CentWeight(15000) << "kg" << std::endl;

	// Grazinam 0
	return 0;
}

// Metodu implementacijos
int AverageVilniusPassengers(int passengers, int notVilniusPassengers, int trainVagons)
{
	return (passengers - notVilniusPassengers) / trainVagons; // Is visu keleiviu atemam tuos kurie nevaziuoja i vilniu, padalinam is vagonu ir grazinam rezultata(k)
}

int RectangleArea(Vec2 coordinate1, Vec2 coordinate2)
{
	return (coordinate1.y * coordinate2.x) + (coordinate1.x * coordinate2.y); // Apskaiciuojam plota, grazinam rezultata
}

int RectangleCircumference(Vec2 coordinate1, Vec2 coordinate2)
{
	return (coordinate1.x + coordinate2.x) * 2 + (coordinate1.y + coordinate2.y) * 2; // Apskaiciuojam perimetra ir grazinam rezultata
}

float CockroachSpeed(float speed)
{
	return speed / 0.036; // Paverciam km/h i cm/s ir grazinam rezultata
}

int CentWeight(int fine)
{
	return ((fine * 100) * 0.83) / 1000; // Eurus paverciam i centus, dauginam is cento svorio ir tada gramus pavericam i kilogramus. Grazinam rezultata.
}