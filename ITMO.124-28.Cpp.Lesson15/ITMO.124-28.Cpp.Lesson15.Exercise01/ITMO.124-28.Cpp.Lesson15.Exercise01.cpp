#include <iostream>
#include <string>
#include <map>

struct StudentGrade
{
    std::string name;
    char grade;

    StudentGrade(std::string name, char grade)
    {
        this->name = name;
        this->grade = grade;
    }
};

int main()
{
    const char gradeA = 'A';
    const char gradeB = 'B';
    const char gradeC = 'C';
    const char gradeD = 'D';
    const char gradeF = 'F';

    StudentGrade ivan("Ivan", gradeA);
    StudentGrade pavel("Pavel", gradeC);
    StudentGrade irina("Irina", gradeA);
    StudentGrade maria("Maria", gradeD);

    std::map<std::string, char> studMap;
    studMap[ivan.name] = ivan.grade;
    studMap[pavel.name] = pavel.grade;
    studMap[irina.name] = irina.grade;
    studMap[maria.name] = maria.grade;

    for (auto item = studMap.begin(); item != studMap.end(); item++)
    {
        std::cout << item->first << ": " << item->second << std::endl;
    }

    return 0;
}

