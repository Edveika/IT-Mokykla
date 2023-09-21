// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>
#include <iomanip>

double get_change_from_file();
double get_max_from_file();
double get_avg_from_file();

int main()
{
    std::ofstream ataskaitosFile;
    ataskaitosFile.open("Ataskaita.txt");

    ataskaitosFile << std::fixed << std::setprecision(2) << get_change_from_file() << std::endl;
    ataskaitosFile << std::fixed << std::setprecision(2) << get_max_from_file() << std::endl;
    ataskaitosFile << std::fixed << std::setprecision(2) << get_avg_from_file() << std::endl;

    ataskaitosFile.close();

    return 0;
}

double get_change_from_file()
{
    double totalMoney = 0.0;
    double totalPrice = 0.0;

    std::ifstream islaiduFile;
    islaiduFile.open("Islaidos.txt");

    islaiduFile >> totalMoney;

    double i_Value = 0.0;
    while (islaiduFile >> i_Value)
    {
        totalPrice += i_Value;
    }

    islaiduFile.close();

    return totalMoney - totalPrice;
}

double get_max_from_file()
{
    double maxValue = 0.0;
    
    std::ifstream islaiduFile;
    islaiduFile.open("Islaidos.txt");

    int i = 0;
    double i_Value = 0.0;
    while (islaiduFile >> i_Value)
    {
        if (i > 0)
        {
            if (i_Value >= maxValue)
            {
                maxValue = i_Value;
            }
        }
        ++i;
    }

    islaiduFile.close();

    return maxValue;
}

double get_avg_from_file()
{
    double avg = 0.0;
    double sum = 0.0;

    std::ifstream islaiduFile;
    islaiduFile.open("Islaidos.txt");

    int i = 0;
    double i_Value = 0.0;
    while (islaiduFile >> i_Value)
    {
        if (i > 0)
        {
            sum += i_Value;
        }
        ++i;
    }

    islaiduFile.close();

    return sum / (i - 1); // -1 nes pirmas skaicius faile yra pinigu suma
}