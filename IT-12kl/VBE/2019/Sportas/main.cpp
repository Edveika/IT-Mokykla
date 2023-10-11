// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

//
// Rezultatai
//
int time_ellapsed[30];

//
// Pradiniai duomenys
//
int player_count = 0;
std::string first_name[30];
int start_id[30];
Time start_time[30];
int finish_count = 0;
int finish_start_id[30];
Time finish_time[30];
int accurate_shots[30][10];

bool is_number(char c);
void get_time_ellapsed();

int main()
{
    std::ifstream input_file;
    input_file.open("U2.txt");
    if (!input_file.is_open())
        return 1;

    input_file >> player_count;
    if (player_count < 1 || player_count > 30)
        return 2;

    for (int i = 0; i < player_count; ++i)
    {
        char c;
        while (input_file >> c)
        {
            if (is_number(c))
                break;

            first_name[i] += c;
        }

        input_file >> start_id[i];
        input_file >> start_time[i].hours;
        input_file >> start_time[i].minutes;
        input_file >> start_time[i].seconds;
    }

    input_file >> finish_count;
    if (finish_count)
    {
        for (int i = 0; i < finish_count; ++i)
        {
            input_file >> finish_start_id[i];
            input_file >> finish_time[i].hours;
            input_file >> finish_time[i].minutes;
            input_file >> finish_time[i].seconds;
            int track_count = (finish_start_id[i] / 100) % 10;

            for (int j = 0; j < track_count * 2; ++j)
            {
                int cur_shot_count = 0;

                input_file >> cur_shot_count;

                accurate_shots[i][j] = cur_shot_count;
            }
        }
    }

    input_file.close();

    get_time_ellapsed();

    return 0;
}

bool is_number(char c)
{
    if (c >= '0' && c <= '9')
        return true;

    return false;
}

void get_time_ellapsed()
{
    for (int i = 0; i < player_count; ++i)
    {
        int seconds_start = 0;
        int seconds_end = 0;
        for (int k = 0; k < player_count; ++k)
        {
            if (finish_start_id[i] == start_id[k])
            {
                seconds_start = (start_time[k].hours * 3600) + (start_time[k].minutes * 60) + start_time[k].seconds;
                seconds_end = (finish_time[k].hours * 3600) + (finish_time[k].minutes * 60) + finish_time[k].seconds;

                int track_count = (finish_start_id[k] / 100) % 10;
                for (int j = 0; j < track_count * 2; j++)
                {
                    int extra_sec = (5 - accurate_shots[k][j]) * 60;
                    seconds_end += extra_sec;
                }

                time_ellapsed[i] = seconds_end - seconds_start;
                std::cout << time_ellapsed[i] << std::endl;
            }
        }
    }
}
