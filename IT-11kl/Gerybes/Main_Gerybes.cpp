// Darba atliko: Edvinas Bureika
#include <iostream>

// consts
const float PRICE_POTATOE = 0.2f;
const float PRICE_RUNKELIS = 0.13f;
const float PRICE_CARROT = 0.16f;

int main()
{
    //
    // Inputas
    //
    int lengthA = 0;
    int widthB = 0;

    std::cin >> lengthA;
    std::cin >> widthB;

    int harvestPotatoeN = 0;
    int harvestRunkeliaiM = 0;
    int harvestCarrotK = 0;

    std::cin >> harvestPotatoeN;
    std::cin >> harvestRunkeliaiM;
    std::cin >> harvestCarrotK;

    //
    // A. ir B. Apskaiciuoja plotus
    //
    float area = (lengthA * 0.01f) * (widthB * 0.01f);
    float areaPotatoe = area * 1/3.f;
    float areaRunkelis = area * 1/10.f;
    float areaCarrots = area - areaPotatoe - areaRunkelis;

    // Isveda rezultatus i konsole
    printf("%.2f ", area);
    printf("%.2f ", areaPotatoe);
    printf("%.2f ", areaRunkelis);
    printf("%.2f ", areaCarrots);

    //
    // C. Apskaiciuoja uzdarbi
    //
    float totalProfit = (((harvestPotatoeN * areaPotatoe) * PRICE_POTATOE) 
    + ((harvestRunkeliaiM * areaRunkelis) * PRICE_RUNKELIS) 
    + ((harvestCarrotK * areaCarrots) * PRICE_CARROT))
    * 100; // kad butu centais

    // Paprintina uzdarbi
    printf("%.2f \n", totalProfit);

    return 0;
}