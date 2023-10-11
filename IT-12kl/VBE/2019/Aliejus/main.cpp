// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

//
// Papildomi duomenys
//
int l_full_one = 0;
int l_full_three = 0;
int l_full_five = 0;
int extra_five = 0;
int extra_three = 0;
int extra_one = 0;

//
// Pradiniai duomenys
//
int one_litre;
int three_litre;
int five_litre;
int oil_liters;
int expenses;
int l_one_price;
int l_three_price;
int l_five_price;

// Supilstys alieju i turimus indelius
int pour_five_litre();
int pour_three_litre();
int pour_one_litre();

// Apskaiciuoja kiek reikes papildomu stiklainiu
int extra_five_litre();
int extra_three_litre();
int extra_one_litre();

int main()
{
    //
    // Surasomi pradiniai duomenys pagal salyga
    //
    std::ifstream input_file;
    input_file.open("U1.txt");

    input_file >> one_litre;
    input_file >> three_litre;
    input_file >> five_litre;
    input_file >> oil_liters;

    input_file >> expenses;
    input_file >> l_one_price;
    input_file >> l_three_price;
    input_file >> l_five_price;

    input_file.close();

    // Gaunamas sunaudotu stiklainiu skaicius
    int count_five = pour_five_litre();
    int count_three = pour_three_litre();
    int count_one = pour_one_litre();

    //
    // Surasomi rezultatai
    //
    std::ofstream output_file;
    output_file.open("U1rez.txt");

    // Sunaudotu stiklainiu ir likusiu stiklainiu skaicius
    output_file << count_one << " " << count_three << " " << count_five << " " << oil_liters << std::endl;
    output_file << one_litre - count_one << " " << three_litre - count_three << " " << five_litre - count_five << std::endl;

    // Jei dar liko aliejaus
    if (oil_liters > 0)
    {
        // Pilstom i kiek imanoma didesnes talpas, kol jo nebelieka
        extra_five_litre();
        extra_three_litre();
        extra_one_litre();
    }

    // Kiek papildomu stiklainiu sunaudojom
    output_file << extra_one << " " << extra_three << " " << extra_five << std::endl;
    // Apskaiciuoajamas uzdarbis
    output_file << ((count_one+extra_one) * l_one_price) + ((count_three+extra_three) * l_three_price) + ((count_five + extra_five) * l_five_price) - expenses;


    // Rezultatai surasyti i faila, failas uzdaromas
    output_file.close();

    return 0;
}

int pour_five_litre()
{
    // Iteruojama per turimus 5 litru stiklainius
    for (int i = 0; i < five_litre; ++i)
    {
        if (oil_liters - 5 >= 0 && l_full_five <= five_litre)
        {
            oil_liters -= 5;
            ++l_full_five;
        }
    }
}

int pour_three_litre()
{
    for (int i = 0; i < three_litre; ++i)
    {
        if (oil_liters - 3 >= 0 && l_full_three <= three_litre)
        {
            oil_liters -= 3;
            ++l_full_three;
        }
    }
}

int pour_one_litre()
{
    for (int i = 0; i < one_litre; ++i)
    {
        if (oil_liters - 1 >= 0 && l_full_one <= one_litre)
        {
            oil_liters -= 1;
            ++l_full_five;
        }
    }
}

int extra_five_litre()
{
    while (oil_liters - 5 >= 0)
    {
        oil_liters -= 5;
        ++extra_five;
    }
}

int extra_three_litre()
{
    while (oil_liters - 3 >= 0)
    {
        oil_liters -= 3;
        ++extra_three;
    }
}

int extra_one_litre()
{
    while (oil_liters - 1 >= 0)
    {
        oil_liters -= 1;
        ++extra_one;
    }
}
