// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>

#define MAX_INT 0x7fffffff

// Domenu tipas laikantis valandas ir minutes
struct Time
{
    int hours;
    int minutes;
};

// Duomenu tipas laikantis informacija apie begima
// Menesio diena, begimo laiko pradzia ir pabaiga
struct RunData
{
    int day;
    Time time_start;
    Time time_end;
};

//
// Global kintamieji
//

// Kiek dienu buvo begama
int run_day_count = 0;
// Kiek dienu buvo nubegta greiciausiai
int best_day_count = 0;

// Tikrina ar ta diena buvo begta
bool has_ran(RunData run_data);
// Grazina reiksme, kiek minuciu buvo begama
int get_minutes_ran(RunData run_data);
// Suranda geriausia begima/begimus ir suraso dienas i best_days array
RunData find_best_run(RunData* run_data, int best_days[]);

int main()
{
    //
    // Skaitymas is failo
    //
    std::ifstream input_file;
    input_file.open("U1.txt");

    // Jei failas nerastas, programa terminuojama
    if (!input_file.is_open())
        return 1;

    // Gaunama diena ir patikrinama ar ji yra nuo 1 iki 31
    input_file >> run_day_count;
    if (run_day_count < 1 && run_day_count > 31)
        return 2;

    // Masyvai, kurie laiko begimo duomenis, vienas laiko ryto duomenis, kitas vakaro(Butu galima rasyt i viena, bet reiktu sudetingesnes strukturos)
    RunData morning_run_data[run_day_count];
    RunData evening_run_data[run_day_count];

    // Surasomi duomenys i atitinkamus masyvus
    for (int i = 0; i < run_day_count; ++i)
    {
        input_file >> morning_run_data[i].day;
        evening_run_data[i].day = morning_run_data[i].day;

        input_file >> morning_run_data[i].time_start.hours;
        input_file >> morning_run_data[i].time_start.minutes;
        input_file >> morning_run_data[i].time_end.hours;
        input_file >> morning_run_data[i].time_end.minutes;

        input_file >> evening_run_data[i].time_start.hours;
        input_file >> evening_run_data[i].time_start.minutes;
        input_file >> evening_run_data[i].time_end.hours;
        input_file >> evening_run_data[i].time_end.minutes;
    }

    // Duomenys gauti, failas uzdaromas
    input_file.close();

    // Surandamos dienos su greiciausiais prabegimais ir surasomos i best_days array
    int best_days[run_day_count];

    // Kadangi naudojama primityvi struktura, searcha reikes daryti 2 kartus
    RunData shortest_morning = find_best_run(morning_run_data, best_days);
    RunData shortest_evening = find_best_run(evening_run_data, best_days);

    //
    // Rezultatai surasomi i faila
    //
    std::ofstream output_file;
    output_file.open("U1rez.txt");

    output_file << "Minimalus laikas" << std::endl;
    output_file << get_minutes_ran(shortest_morning) + get_minutes_ran(shortest_evening) << std::endl;
    output_file << "Dienos" << std::endl;
    // Iteruoja per best day masyva ir suraso kiekviena diena i faila
    for (int i = 0; i < best_day_count; ++ i)
        output_file << best_days[i] << " ";
    
    return 0;
}

bool has_ran(RunData statistics)
{
    // Jei pradzios arba pabaigos laikas = 0, begimo nebuvo.
    // Laiko ieskoma dienose, kai buvo begama ryte ir vakare
    if 
    (
    statistics.time_start.hours == 0 && statistics.time_start.minutes == 0 || 
    statistics.time_end.hours == 0 && statistics.time_end.minutes == 0
    )
            return false;

    return true;
}

int get_minutes_ran(RunData statistics)
{
    // 
    // Start ir end laikai convertinami i minutes
    //
    int time_end_minutes = statistics.time_end.hours * 60;
    time_end_minutes += statistics.time_end.minutes;

    int time_start_minutes = statistics.time_start.hours * 60;
    time_start_minutes += statistics.time_start.minutes;

    // Pabaigos laikas - starto laikas = visas begimo laikas minutemis
    return time_end_minutes - time_start_minutes;
}

RunData find_best_run(RunData* run_data, int best_days[])
{
    RunData shortest_time;
    // Max int - didziausia int reiksme, naudinga ieskant maziausios reiksmes, nes lyginant pirma reiksme su didziausia reiksme, turbut, kad visada ji bus mazesne
    int m_shortest_time = MAX_INT;

    // Iteruojama per kiekviena begimo dieno pradzios arba pabaigos arrayjaus
    for (int i = 0; i < run_day_count; ++i)
    {
        // Jei nebego ryte ar vakare, diena nebus skaiciuojama
        if (!has_ran(run_data[i]))
            continue;

        // Apskaiciuoja begtu minuciu skaiciu
        int i_minutes_ran = get_minutes_ran(run_data[i]);
        // Randa maziausia minuciu skaiciu
        if (i_minutes_ran <= m_shortest_time)
        {
            m_shortest_time = i_minutes_ran;
            shortest_time = run_data[i];

            // Kadangi turim 2 masyvus, norint isvengt besidubliuojanciu dienu, pries rasant best day i array reik patikrint ar jau tokios dienos nera
            bool duplicate = false;
            for (int j = 0 ; j < best_day_count; ++j)
                if (best_days[j] == run_data[i].day)
                    duplicate = true;

            // Jei diena i neegzistuoja best day arrayiuj
            if (i_minutes_ran == m_shortest_time && !duplicate)
            {
                // Irasom ta diena i array
                best_days[best_day_count] = run_data[i].day;
                ++best_day_count;
            }
        }
    }

    return shortest_time;
}