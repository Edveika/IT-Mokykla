// Darba atliko: Edvinas Bureika
#include <iostream>

int main()
{
	//
	// 1 UZD
	//

	// Kintamasis n draugu skaiciui laiktyti
	int n;

	// Kintamasis ivesciai laikyti
	int input = 0;

	// Kintamasis lyginiu skaiciu sumai laikyti
	int primeNumberCount = 0;

	// Paprasom naudotojo ivesti draugu skaiciu
	std::cout << "Iveskite draugu skaiciu: ";
	std::cin >> n;

	// Iteruojam per draugus
	for (int i = 1; i <= n; i++)
	{
		// Ivedam kiekvieno draugo pasirinkta skaiciu
		std::cout << "Iveskite " << i << " draugo skaiciu:" << std::endl;
		std::cin >> input;

		// Jei dalinant is 2 liekana 0
		if (input % 2 == 0)
			// Skaicius lyginis
			primeNumberCount++;
	}

	// Jeigu lyginiu skaiciu suma yra daugiau uz 0
	if (primeNumberCount)
		// Atspausdinam lyginiu skaiciu suma
		std::cout << "Lyginiu skaiciu suma: " << primeNumberCount << std::endl;
	// Jeigu lyginiu skaiciu suma yra lygi 0
	else
		// Isvedam i ekrana, kad lyginiu skaiciu nera
		std::cout << "Lyginiu skaiciu nera" << std::endl;

	// Uzduotys atskiriamos eilute, kad butu lengviau skaityti rezultata
	std::cout << "-------------------------------" << std::endl;

	//
	// 2 UZD
	//

	// Kintamasis metamu kauliuku skaiciui laikyti
	int n1;

	// Kintamasis maksimaliam tasku skaiciui laikyti
	int maxScore = 0;

	// Zaidejo taskai
	int playerScore = 0;

	// Zaidejo tasku vidurkis
	float playerAverageScore = 0;

	// Ismesto kamuoliuko reiksme
	int thrownBall = 0;

	// Paprasom vartotojo ivesti metamu kamuoliuku skaiciu
	std::cout << "Iveskite metamu kamuoliuku skaiciu: ";
	std::cin >> n1;

	// Apskaiciuojamas maksimalus tasku skaicius padauginus kamuoliuku skaiciu is 6(didziausio galimo sieneles skaiciaus)
	maxScore = n1 * 6;

	// Atspausdinam maksimalu tasku skaiciu
	std::cout << "Maksimalus tasku skaicius: " << maxScore << std::endl;

	// Iteruojam per visus metamus kamuoliukus
	for (int j = 1; j <= n1; j++)
	{
		// Metamo kamuoliuko reiksme bus lygi atsitiktinai nuo 1 iki 6
		thrownBall = rand() % 6 + 1;

		// Prideda ismesta kamuoliuko reiksme prie zaidejo tasku
		playerScore += thrownBall;

		// Vidurkis bus lygus zaidejo tasku skaiciui padalintam is mestu kauliuku skaiciaus
		playerAverageScore = playerScore / j;

		// Atspausdinam rezultata
		std::cout << "Ismestas kamuoliukas: " << thrownBall << " bendras zaidejo tasku skaicius: " << playerScore << std::endl;
	}

	// Atspausdinam zaidejo taskus ir tasku vidurki
	std::cout << "Isviso surinkote " << playerScore << " taskus" << " tasku vidurkis: " << playerAverageScore << std::endl;

	// Patikrinam ar zaidejas laimejo
	if (playerScore > maxScore / 2)
		// Jei tasku skaicius yra daugiau kaip puse max tasku, zaidejas laimejo
		std::cout << "Laimejote!" << std::endl;
	// Kitaip
	else
		// Pralaimejo
		std::cout << "Pralaimejote, bandykite dar karta!" << std::endl;

	// Uzduotys atskiriamos eilute, kad butu lengviau skaityti rezultata
	std::cout << "-------------------------------" << std::endl;

	//
	// 3 UZD
	//

	// Onutes sokinejimo per virvute kartojimas
	int m;

	// Suoliuku skaicius
	int totalJumps = 0;

	// Kintamasis ivesciai
	int currentJump = 0;

	// Suoliuku vidurkis
	float jumpAverage = 0;

	// Paprasom vartotojo ivesti suoliuku kartojimo skaiciu
	std::cout << "Kiek kartu Onute kartos suoliukus? ";
	std::cin >> m;

	// Iteravimas per roundus
	for (int k = 1; k <= m; k++)
	{
		// Vartotojas iveda roundo suoliuku skaiciu
		std::cout << "Iveskite " << k << " karto suoliuku skaiciu: ";
		std::cin >> currentJump;

		// pridedam roundo suoliukus prie bendro suoliuku skaiciaus
		totalJumps += currentJump;

		// Apskaiciuojamas viduris suoliukus padalinus is roundu skaiciaus
		jumpAverage += currentJump / k;
	}

	// Atspausdinamas rezultatas
	std::cout << "Isviso padaryta: " << totalJumps << " suoliuku" << " vidurkis: " << jumpAverage << std::endl;

	// Uzduotys atskiriamos eilute, kad butu lengviau skaityti rezultata
	std::cout << "-------------------------------" << std::endl;

	//
	// 4 UZD
	//

	// Begiku skaicius
	int n2;

	// Trumpiausias laikas, per kuri buvo nubegta trasa
	int fastestSpeed = 0x7FFFFFFF; // 0x7FFFFFF yra lygus max int reiksmei, suteikiau ja, kad veiktu mano algoritmo logika

	// Kintamasis greicio ivesciai
	int currentSpeed = 0;

	// Greicio vidurkis
	float speedAverage = 0;

	// Kintamasis, kuriame bus laikomas totalus greitis, vidurkiui skaiciuoti
	int totalSpeed = 0;

	// Ivedamas begiku skaicius
	std::cout << "Iveskite begiku skaiciu: ";
	std::cin >> n2;

	// Iteracija per visus begikus
	for (int l = 1; l <= n2; l++)
	{
		// Ivedamas begiku laikas
		std::cout << "Iveskite laika, per kuri " << l << " dalyvis nubego trasa: ";
		std::cin >> currentSpeed;

		// Begiko laikas pridedamas prie totalaus greicio
		totalSpeed += currentSpeed;

		// Jeigu current greitis mazesnis uz didziausia greiti
		if (currentSpeed < fastestSpeed)
			// greiciausias greitis bus current, nes jis mazesnis
			fastestSpeed = currentSpeed;
	}

	// Apskaiciuojamas greicio vidurkis, visa greiti padalinus is visu begiku
	speedAverage = totalSpeed / n2;

	// Atspausdinami rezultatai
	std::cout << "Vidurkis: " << speedAverage << std::endl;
	std::cout << "Greiciausiai trasa buvo nubegta per: " << fastestSpeed << std::endl;
	std::cout << "Jis buvo greitesnis " << speedAverage - fastestSpeed << " sek greitesnis uz vidurki" << std::endl;

	// Uzduotys atskiriamos eilute, kad butu lengviau skaityti rezultata
	std::cout << "-------------------------------" << std::endl;

	//
	// 5 UZD
	//

	// Pirkiniu skaicius
	int n3;

	// Kainos ivestis
	int price = 0;

	// Svorio ivestis
	float weight = 0;

	// Totalus svoris
	float totalWeight = 0;

	// Totali kaina
	float totalPrice = 0;

	// Kainos vidurkis
	float priceAverage = 0;

	// Ivedamas pirkiniu skaicius
	std::cout << "Iveskite pirkiniu skaiciu: ";
	std::cin >> n3;

	// Iteracijas per pirkinius
	for (int m = 1; m <= n3; m++)
	{
		// Ivedama kaina
		std::cout << "Iveskite kaina(centais): ";
		std::cin >> price;

		// Ivedamas svoris
		std::cout << "Iveskite svori(gramais): ";
		std::cin >> weight;

		// Apskaiciuojamas totalus svoris
		totalWeight += weight;

		// Apskaiciuojama totali kaina
		totalPrice += price;
	}

	// Apskaiciuojamas vidurkis totalia kaina padalinus is pirkiniu skaiciaus ir paverciant i litus
	priceAverage = (totalPrice / n3) / 100;

	// Vidurkio rezultatas isvedamas i ekrana
	std::cout << "Kainos vidurkis: " << priceAverage << " eur" << std::endl;

	// Jeigu svoris maziau kaip 5gb
	if (totalWeight / 1000 < 5)
		// Pirkinius panes
		std::cout << "Petriukas pirkinius panes" << std::endl;
	// Kitaip
	else
		// Pirkiniu nepanes
		std::cout << "Petriukas pirkiniu nepanes" << std::endl;

	// Grazinam 0
	return 0;
}