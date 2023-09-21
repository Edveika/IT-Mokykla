// Darba atliko: Edvinas Bureika
#include <iostream>

int main()
{
    int lengthA = 0;
    int lengthB = 0;
    int lengthC = 0;
    
    std::cin >> lengthA;
    std::cin >> lengthB;
    std::cin >> lengthC;

    if (lengthA + lengthB > lengthC || lengthB + lengthC > lengthA || lengthA + lengthC > lengthB)
    {
        if ((lengthA + lengthB + lengthC) / lengthA == 3)
            std::cout << "Galima. Lygiakrastis" << std::endl;
        else if (lengthA == lengthB || 
                lengthA == lengthC ||
                lengthB == lengthA ||
                lengthB == lengthC ||
                lengthC == lengthA ||
                lengthC == lengthB)
            std::cout << "Galima. Lygiasonis" << std::endl;
        else
            std::cout << "Galima. Ivairiakrastis" << std::endl;
    }
    else
        std::cout << "Negalima" << std::endl;

    return 0;
}