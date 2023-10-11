// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>
#include <string>

struct Time { int hour, minute, second; };

// Starto duomenys
int player_count = 0;
std::string player_name[30];
Time player_start_time[30];

// Finisho duomenys
int finish_player_count = 0;
std::string finish_player_name[30];
Time finish_player_time[30];
int min_elapsed[30];
int sec_elapsed[30];

void get_seconds_elapsed();

int main()
{
    std::ifstream input_file;
    input_file.open("U2.txt");

    input_file >> player_count;

    std::string line;
    int i_player = 0;
    while (std::getline(input_file, line) && i_player + 1 < player_count)
    {
        if (line.size() > 20)
        {
            std::string name = line.substr(0,20);
            int hour = std::stoi(line.substr(20, 2));
            int minute = std::stoi(line.substr(23, 2));
            int second = std::stoi(line.substr(26, 2));

            player_name[i_player] = name;
            player_start_time[i_player].hour = hour;
            player_start_time[i_player].minute = minute;
            player_start_time[i_player].second = second;

            ++i_player;
        }
    }

    line = "";
    i_player = 0;
    input_file >> finish_player_count;
    while (std::getline(input_file, line))
    {
        if (line.size() > 20)
        {
            std::string name = line.substr(0,20);
            int hour = std::stoi(line.substr(20, 2));
            int minute = std::stoi(line.substr(23, 2));
            int second = std::stoi(line.substr(26, 2));

            finish_player_name[i_player] = name;
            finish_player_time[i_player].hour = hour;
            finish_player_time[i_player].minute = minute;
            finish_player_time[i_player].second = second;

            ++i_player;
        }
    }

    get_seconds_elapsed();

    std::cout << sec_elapsed[0] << std::endl;

    input_file.close();

    return 0;
}

void get_seconds_elapsed()
{
    for (int i = 0; i < finish_player_count; ++i)
    {
        for (int j = 0; j < player_count; ++j)
        {


            std::cout << player_name[j] << ":" << finish_player_name[i] << std::endl;
        if (player_name[j] == finish_player_name[i])
        {
            int h_elapsed = finish_player_time[i].hour - player_start_time[i].hour;
            int m_elapsed = finish_player_time[i].minute - player_start_time[i].minute;
            int s_elapsed = finish_player_time[i].second - player_start_time[i].second;

            sec_elapsed[i] = (h_elapsed * 3600) + (m_elapsed * 60) + s_elapsed;
        }
        }
    }
}
