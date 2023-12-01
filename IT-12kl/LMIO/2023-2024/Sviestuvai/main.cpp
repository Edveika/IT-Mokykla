#include <iostream>
#include <utility>

std::pair<int, int> get_best_match(int list[], int size);

int main()
{
    int light_count = 0;

    std::cin >> light_count;

    int light_strenghts[light_count];

    for (int i = 0; i < light_count; ++i)
        std::cin >> light_strenghts[i];

    std::pair<int, int> best_match = get_best_match(light_strenghts, light_count);

    std::cout << best_match.first << std::endl;
    std::cout << best_match.second << std::endl;

    return 0;
}

std::pair<int, int> get_best_match(int list[], int size)
{
    int x = 0;
    int y =0;
    float smallest_diff = 10000.0f;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            int diff = std::abs(list[i] - list[j]);
            if (diff < smallest_diff)
            {
                smallest_diff = diff;
                x = list[i];
                y = list[j];
            }
        }
    }

    return {x, y};
}
