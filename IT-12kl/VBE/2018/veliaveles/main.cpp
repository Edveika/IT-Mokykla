// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

// Pradiniai duomenys
int line_count = 0;
int yellow_count = 0;
int green_count = 0;
int red_count = 0;

int get_flag_count();

int main()
{
    std::ifstream input_file;
    input_file.open("U1.txt");

    input_file >> line_count;
    for (int i = 0; i < line_count; ++i)
    {
        int color_count = 0;
        char c;
        input_file >> c;
        input_file >> color_count;

        if (c == 'G')
        {
            yellow_count += color_count;
        }
        else if (c == 'Z')
        {
            green_count += color_count;
        }
        else if (c == 'R')
        {
            red_count += color_count;
        }
    }

    input_file.close();

    std::ofstream output_file;
    output_file.open("U1rez.txt");

    output_file << get_flag_count() << std::endl;
    output_file << "G = " << yellow_count << std::endl;
    output_file << "Z = " <<  green_count << std::endl;
    output_file << "R = " <<  red_count << std::endl;

    output_file.close();

    return 0;
}

int get_flag_count()
{
    int flag_count = 0;

    while (yellow_count - 2 >= 0 && green_count - 2 >= 0 && red_count - 2 >= 0)
    {
        ++flag_count;
        yellow_count -= 2;
        green_count -= 2;
        red_count -= 2;
    }

    return flag_count;
}
