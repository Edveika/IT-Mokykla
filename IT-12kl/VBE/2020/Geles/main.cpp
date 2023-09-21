// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

const int MAX_FLOWER_COUNT = 30;

struct Date
{
    int month;
    int day;
};

//
// Rezultato duomenys
//
int res_dur_count = 0;
Date res_start;
Date res_end;

//
// Papildomi duomenys
//
int same_dur_count[MAX_FLOWER_COUNT];
Date same_dur_start[MAX_FLOWER_COUNT][MAX_FLOWER_COUNT];
Date same_dur_end[MAX_FLOWER_COUNT][MAX_FLOWER_COUNT];

//
// Pradiniai duomenys
//
int flower_count = 0;
int flower_number[MAX_FLOWER_COUNT];
Date start[MAX_FLOWER_COUNT];
Date end[MAX_FLOWER_COUNT];

bool read_input_from_file();
void get_same_duration_flowers();
void get_result();
bool write_result_to_file();

int main()
{
    if (!read_input_from_file())
        return 1;

    get_same_duration_flowers();

    get_result();

    write_result_to_file();

    return 0;
}

bool read_input_from_file()
{
    std::ifstream input_file;
    input_file.open("U1.txt");

    input_file >> flower_count;
    if (flower_count < 1 && flower_count > 30)
        return false;

    for (int i = 0; i < flower_count; ++i)
    {
        input_file >> flower_number[i];
        input_file >> start[i].month;
        input_file >> start[i].day;
        input_file >> end[i].month;
        input_file >> end[i].day;
    }

    input_file.close();

    return true;
}

// Randa same duration augancias geles
void get_same_duration_flowers()
{
    int longest_duration = 0;
    for (int i = 0; i < flower_count; ++i)
    {
        int cur_date = 0;
        for (int j = 0; j < flower_count; ++j)
        {
            // Jei geles auga vienam intervale
            if (start[j].month <= start[i].month && end[j].day <= end[i].day)
            {
                // Rasom ji i same duration array
                same_dur_start[i][cur_date] = start[j];
                same_dur_end[i][cur_date] = end[j];
                // Didinamas to array countas
                ++same_dur_count[i];
            }
        }
    }
}

// Randa didziausia skaicius geliu, kurios auga vienu intervalu, paima indexa ir juo uzraso rezultata
void get_result()
{
    int highest_same_dur_count = 0;
    int i_flower = 0;

    for (int i = 0; i < flower_count; ++i)
    {
        if (same_dur_count[i] > highest_same_dur_count)
        {
            highest_same_dur_count = same_dur_count[i];
            i_flower = i;
        }
    }

    res_dur_count = same_dur_count[i_flower];
    res_start = start[i_flower];
    res_end = end[i_flower];
}

bool write_result_to_file()
{
    std::ofstream output_file;
    output_file.open("U1rez.txt");

    output_file << res_dur_count << std::endl;
    output_file << res_start.month << " " << res_start.day << std::endl;
    output_file << res_end.month << " " << res_end.day << std::endl;

    output_file.close();

    return true;
}