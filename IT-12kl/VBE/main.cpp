#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string favSubject;
    int gradeCount;
    std::vector<int> grades;
    float avg;
};

struct Subject {
    std::string name;
    int count = 0;
    std::vector<std::string> students;
};

bool subjectExists(std::vector<Subject> subjects, std::string name);
int iSubjectFromName(std::vector<Subject> subjects, std::string name);
bool eval(Subject x, Subject y) { return x.count > y.count || (x.count == y.count && x.name < y.name); }

int main() {
    int studentCount = 0;
    std::ifstream input_file("U1.txt");

    input_file >> studentCount;

    Student students[studentCount];
    std::vector<Subject> subjects;

    for (int i = 0; i < studentCount; ++i)
    {
        input_file >> students[i].name;
        input_file >> students[i].favSubject;
        input_file >> students[i].gradeCount;

        for (int j = 0; j < students[i].gradeCount; ++j)
        {
            int j_grade = 0;
            input_file >> j_grade;
            students[i].grades.push_back(j_grade);
        }

        float gradeSum = 0.0f;
        for (int j = 0; j < students[i].gradeCount; ++j)
            gradeSum += students[i].grades[j];

        students[i].avg = gradeSum / students[i].gradeCount;
    }

    for (int i = 0; i < studentCount; ++i)
    {
        if (students[i].avg >= 9.0f)
        {
            if (subjectExists(subjects, students[i].favSubject))
            {
                int curSubject = iSubjectFromName(subjects, students[i].favSubject);
                ++subjects[curSubject].count;
                subjects[curSubject].students.push_back(students[i].name);
            }
            else
            {
                Subject newSubject;
                newSubject.name = students[i].favSubject;
                ++newSubject.count;
                newSubject.students.push_back(students[i].name);
                subjects.push_back(newSubject);
            }
        }
    }

    std::cout << subjects.size() << std::endl;

    std::sort(subjects.begin(), subjects.end(), eval);
    for (int i = 0; i < subjects.size(); ++i)
    {
        std::cout << subjects[i].name << " " << subjects[i].count << std::endl;
        for (int j = 0; j < subjects[i].count; ++j)
        {
            std::cout << subjects[i].students[j] << std::endl;
        }
    }

    return 0;
}

bool subjectExists(std::vector<Subject> subjects, std::string name)
{
    for (int i = 0; i < subjects.size(); ++i)
        if (subjects[i].name == name)
            return true;

    return false;
}

int iSubjectFromName(std::vector<Subject> subjects, std::string name)
{
    for (int i = 0; i < subjects.size(); ++i)
        if (subjects[i].name == name)
        return i;

    return -1;
}