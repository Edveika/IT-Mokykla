// Darba atliko: Edvinas Bureika
#include <iostream>
#include <fstream>
#include <string>

const int MAX_STUDENT_COUNT = 50;
const int MAX_GRADE_COUNT = 100;

//
// Papildomi duomenys
// 
int student_count = 0;
float student_grade_avg[MAX_STUDENT_COUNT];
int preference_count[MAX_STUDENT_COUNT];
std::string subject_students[MAX_STUDENT_COUNT][MAX_STUDENT_COUNT];
std::string subjects[MAX_STUDENT_COUNT];
int subject_count = 0;

//
// Pradiniai duomenys
//
std::string name[MAX_STUDENT_COUNT];
std::string fav_subject[MAX_STUDENT_COUNT];
int grade_count[MAX_STUDENT_COUNT];
float fav_subject_grades[MAX_STUDENT_COUNT][MAX_GRADE_COUNT];

// Gauna pradinius duomenis
bool get_data();
// Suraso pasirinktas pamokas i array NEKARTOJANT JAU SURASYTU
void get_subjects();
// Studento pazymiu vidurkis
void calc_student_avg();
// Patikrina ar yra megstamiausia pamoka, kurioje mokinys turi vidurki >= 9
bool best_subject_exists();
// Atrenkamos megstamiausios pamokos jei vidurkis >= 9
void get_best_subjects();
// Suraso rezultata i failus
void write_results_to_file();

int main()
{
    // Nuskaito duomenis is failo, jei kazkas blogai programa terminuojama
    if (!get_data())
        return 1;

    // Apskaiciuojamas vidurkis
    calc_student_avg();

    // Pagal apskaiciuota vidurki tikrinama ar yra megstamiausia pamoka su vidurkiu >= 9
    if (!best_subject_exists())
    {
        // Jei ne, i faila parasoma, kad vidurkis neatitinka 9
        std::ofstream output_file;
        output_file.open("U2rez.txt");
        output_file << "Neatitinka vidurkis" << std::endl;
        output_file.close();
        return 1;
    }

    // Suraso pamokas i subjects array nekartojant jau egzistuojanciu
    get_subjects();

    // Randamos geriausios pamokos pagal vidurki ir vaiku pasirinkimus
    get_best_subjects();

    // Duomenys surasomi i faila
    write_results_to_file();

    // Programa sekmingai uzsidaro
    return 0;
}

bool get_data()
{
    std::ifstream input_file;
    input_file.open("U2.txt");

    // Tikrina ar failas yra
    if (!input_file.is_open())
        return false;

    input_file >> student_count;
    // studentu gali but nuo 1 iki 50
    if (student_count < 1 && student_count > 50)
        return false;

    // Surasomi duomenys
    for (int i = 0; i < student_count; ++i)
    {
        input_file >> name[i];
        input_file >> fav_subject[i];
        input_file >> grade_count[i];
        for (int j = 0; j < grade_count[i]; ++j)
            input_file >> fav_subject_grades[i][j];
    }

    input_file.close();

    return true;
}

void get_subjects()
{
    for (int i = 0; i < student_count; ++i)
    {
        bool exists = false;
        for (int j = 0; j < student_count; ++j)
            // Jei subjects array jau turi subject i pamoka, rasyti jos dar karta nereik
            if (subjects[j] == fav_subject[i])
                exists = true;

        // Jei tokios pamokos dar nera
        if (!exists)
        {
            // Surasoma i array ir didinamas subject skaicius
            subjects[subject_count] = fav_subject[i];
            ++subject_count;
        }
    }
}

// Apskaiciuoja vidurki sudejus visus pazymius ir padalinus juos is pazymiu skaiciaus
void calc_student_avg()
{
    for (int i = 0; i < student_count; ++i)
    {
        float sum = 0;
        for (int j = 0; j < grade_count[i]; ++j)
            sum += fav_subject_grades[i][j];

        student_grade_avg[i] = sum / grade_count[i];
    }
}

// Tikrina ar yra bent 1 devynetas
bool best_subject_exists()
{
    float max_grade = 0.0f;
    // Sis algoritmas suranda max reiksme masyve student_grades_avg;
    for (int i = 0; i < student_count; ++i)
        // Lyginama max turima reiksme su studento vidurkiu
        if (student_grade_avg[i] > max_grade)
            // Jei vidurkis didesnis pvz uz 0, tai yra nauja max verte. Taip bus rasta didziausia verte
            max_grade = student_grade_avg[i];

    // Jei didziausia verte maziau uz 9, vidurkis per mazas
    if (max_grade < 9)
        return false;

    return true;
}

void get_best_subjects()
{
    // Iteruojama per kiekviena subjects pamoka
    for (int i = 0; i < subject_count; ++i)
    {
        int cur_student = 0;

        // Ir kiekviena studenta
        for (int j = 0; j < student_count; ++j)
        {
            // Jei j studento vidurkis >= 9 ir jo megstamiausia pamoka yra pamoka j
            if (student_grade_avg[j] >= 9.0f && subjects[i] == fav_subject[j])
            {
                // Irasome ji i favorite lesson i names j array. Laiko i pamokos vardus zmoniu, kurie ja megsta ir turi 9
                subject_students[i][cur_student] = name[j];
                ++preference_count[i];
                ++cur_student;
            }
        }
    }
}

// Tiesiog suraso rezultatus i faila atitinkama tvarka
void write_results_to_file()
{
    std::ofstream output_file;
    output_file.open("U2rez.txt");

    for (int i = 0; i < subject_count; ++i)
    {
        if (preference_count[i] > 0)
        {
            output_file << subjects[i] << " " << preference_count[i] << std::endl;

            for (int j = 0; j < preference_count[i]; ++j)
            {
                output_file << subject_students[i][j] << std::endl;
            }
        }
    }

    output_file.close();
}