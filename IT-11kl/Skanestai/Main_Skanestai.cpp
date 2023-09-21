// Darba atliko: Edvinas Bureika
#include <iostream>
#include <iomanip>

int main()
{
    int friendCountA = 0;
    int boyFriendsB = 0; // A > B
    int candyPriceGirlX = 0;
    int candyPriceBoyY = 0; // X > Y

    std::cin >> friendCountA;
    while (boyFriendsB == 0)
    {
        std::cin >> boyFriendsB;
        if (boyFriendsB >= friendCountA)
            boyFriendsB = 0;
    }
    std::cin >> candyPriceGirlX;
    while (candyPriceBoyY == 0)
    {
        std::cin >> candyPriceBoyY;
        if (candyPriceBoyY >= candyPriceGirlX)
            candyPriceBoyY = 0;
    }

    float girlCountPercent = ((friendCountA-boyFriendsB) * 100) / static_cast<float>(friendCountA);
    float totalPriceAts = (friendCountA-boyFriendsB) * (candyPriceGirlX * 0.01f) + boyFriendsB * (candyPriceBoyY * 0.01f);

    printf("%.2f\n", girlCountPercent);
    printf("%.2f\n", totalPriceAts);

    return 0;
}