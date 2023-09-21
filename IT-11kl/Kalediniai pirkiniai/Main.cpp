// Darba atliko: Edvinas Bureika
#include <iostream>

int main()
{
    int moneyForGiftsN = 0;
    int priceA = 0;
    int priceB = 0;
    int priceC = 0;

    //
    // Inputas 
    //
    std::cin >> moneyForGiftsN;
    std::cin >> priceA;
    std::cin >> priceB;
    std::cin >> priceC;

    // patikrina gali nusipirkt 3 pirkinius ir calculatina kiek liko
    int leftMoney = moneyForGiftsN - priceA - priceB - priceC;
    if (leftMoney >= 0)
        std::cout << "Taip" << std::endl;
    else
        std::cout << "Ne" << std::endl;

    //
    // Additional prekiu kainos calc logika
    //
    int additionalPrice = 0;
    if (leftMoney > 0)
    {
        if (priceA < 10 && priceA % 3 == 0 && leftMoney - (priceA * 3) >= 0)
            additionalPrice += priceA * 3;
        if (priceB % 2 == 0 && priceB % 5 == 0 && leftMoney - (priceB * 2) >= 0)
            additionalPrice += priceB * 2;
    }
    
    // Additional prekiu printinimas
    if (additionalPrice != 0)
    {
        if (leftMoney - additionalPrice >= 0)
            std::cout << "Iseina, liko: " << leftMoney - additionalPrice << std::endl;
        else
            std::cout << "Neiseina. Prekiu kaina: " << additionalPrice << std::endl;
    }

    return 0;
}