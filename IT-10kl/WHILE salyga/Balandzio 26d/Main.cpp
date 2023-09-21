// Darba atliko: Edvinas Bureika
#include <iostream>

// 1uzd viesieji kintamieji
int timeS;
int timeS1;

// 2uzd viesieji kintamieji
int priceP;
int priceK;
int moneyS;

// 3uzd viesieji kintamieji
int minutesT1;
int minutesK;
int timeT;

int ClockLatency(int s, int s1);
int Shopping(int p, int k, int s);
int Dinner(int t1, int k, int t);
int Garden(int m1, int m, int n);

int main()
{
	//
	// 1 UZD
	//

	// Pradiniai duomenys: 15 ir 25
	timeS = 15;
	timeS1 = 25;

	// Apskaiciuojam per kiek dienu laikrodis veluos 15 minuciu ir isvedam rezultata i konsole
	std::cout << "Pradiniai duomenys: " << timeS << " ir " << timeS1 << " Laikrodis veluos 15 min uz: " << ClockLatency(timeS, timeS1) << " dienu" << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti rezultata
	std::cout << "---------------------" << std::endl;

	//
	// 2 UZD
	//

	// Pradiniai duomenys: 17, 3 ir 65
	priceP = 17;
	priceK = 3;
	moneyS = 65;

	// Apskaiciuojam prekiu kieki ir isvedam i ekrana
	std::cout << "Pradiniai duomenys: " << priceP << ", " << priceK << " ir " << moneyS << " Perkamu prekiu skaicius: " << Shopping(priceP, priceK, moneyS) << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti rezultata
	std::cout << "---------------------" << std::endl;

	//
	// 3 UZD
	//

	minutesT1 = 17;
	minutesK = 3;
	timeT = 65;
	std::cout << "Mama spes pagaminti: " << Dinner(minutesT1, minutesK, timeT) << " patiekalus" << std::endl;

	// Atskiriam uzduotis linija, kad butu lengviau skaityti rezultata
	std::cout << "---------------------" << std::endl;

	//
	// 4 UZD
	//

	std::cout << "Sodininkas dirbs " << Garden(3, 1, 16) << " dienas" << std::endl;

	// Grazinam 0
	return 0;
}

int ClockLatency(int s, int s1)
{
	// Dienu skaicius
	int days = 0;

	// Laikrodzio velavimas
	int latency = s;

	// Ciklas vyks tol kol velavimas nera lygus 15 minuciu
	while (latency <= 15 * 60)
	{
		// Apskaiciuojam laikrodzio velavima
		latency += s1 * days;

		// Didinam dienu skaiciu
		days++;
	}

	// Grazinam rezultata
	return days;
}

int Shopping(int p, int k, int s)
{
	// Kintamasis u prekiu skaiciui
	int u = 0;

	// Kintamasis totalPrice visu perkamu prekiu sumai
	int totalPrice = 0;

	// Kintamasis prekes sumai
	int itemPrice = p;

	// Ciklas vyks tol kol visa kaina + daigto kaina bus maziau uz turimus pinigus
	while (totalPrice + itemPrice < s)
	{
		// Didinam prekiu skaiciu
		u++;

		// "Kiekviena kita preke uz pries ja stovincia brangesne k eur"
		// Taigi 1 preke p
		// Kita irgi p
		// Ir trecia p + k
		if (u > 1)
			itemPrice += k;

		// Tol kol totali kaina plius prekes kaina yra maziau uz turimus pinigus
		if (totalPrice + itemPrice < s)
			// Perkam :D
			totalPrice += itemPrice;
	}

	// Grazinam prekiu skaiciu
	return u;
}

int Dinner(int t1, int k, int t)
{
	// Kintamasis n patiekalu skaiciui
	int n = 0;

	// Totalus maisto gaminimo laikas
	int totalTime = 0;

	// Vieno patiekalo gaminimo laikas
	int singleDishTime = t1;

	// Kol totalus laikas + vieno patiekalo laikas yra maziau uz laika, per kuri vaikai gris namo
	while (totalTime + singleDishTime < t)
	{
		// Didinam patiekalu skaiciu
		n++;

		// "Pirmas patiekalas pagaminamas per t1 min, antras k minuciu ilgiau nei pirmas ir ttt"
		// Taigi 1 patiekalas t1
		// Kitas irgi p1
		// Ir trecias t1 + k
		if (n > 1)
			// Apskaiciuojam kiek laiko uztruks vienam patiekalui iskepti
			singleDishTime += k;

		// Tol kol visas laikas + vieno patiekalo pagaminimo likas yra maziau uz laika, per kuri gris namo vaikai
		if (totalTime + singleDishTime < t)
			// Gaminam valgyti :)))))))
			totalTime += singleDishTime;
	}

	// Grazinam patiekalu skaiciu
	return n;
}

int Garden(int m1, int m, int n)
{
	// Kintamasis dienu skaiciui saugoti
	int d = 0;

	// Kintamasis totaliam medziu skaiciui saugoti
	int totalTrees = 0;

	// Kintamasis medziu sutvarkytu per diena skaiciui saugoti
	int dailyTrees = m1;

	// Ciklas vyks tol, kol totalus medziu skaicius + daily medziu skaicius yra maziau uz visu medziu skaiciu
	while (totalTrees + dailyTrees < n)
	{
		// Didinam dienu skaiciu
		d++;

		// "Pirma diena sutvarke m1 medziu, antra m medziu daugiau ir ttt" logika
		if (d > 1)
			// Didinam daily medziu kintamaji
			dailyTrees += m;

		// Apskaiciuojam kiek isviso medziu sutvarkys
		if (totalTrees + dailyTrees < n)
			totalTrees += dailyTrees;

		// Jeigu n - totalus sutvarkyti medziai yra maziau uz medziu sutvarkomu per diena reiksme
		if (n - totalTrees < dailyTrees)
			// Reiskiasi liko viena diena darbo, pridedam 1 prie d
			d++;
	}

	// Grazinam d
	return d;
}