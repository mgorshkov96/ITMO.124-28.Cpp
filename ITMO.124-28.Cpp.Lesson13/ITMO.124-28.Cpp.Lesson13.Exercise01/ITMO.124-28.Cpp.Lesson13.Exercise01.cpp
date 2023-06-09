#include <iostream>
#include <vector>
#include "Human.h"
#include "Teacher.h"
#include "Student.h"

int main()
{
	std::vector<int> scores;	
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	Human* stud = new Student("Petrov", "Ivan", "Alekseevich", scores);

	unsigned int teacher_work_time = 40;
	Human* tch = new Teacher("Sergeev", "Dmitriy", "Sergeevich", teacher_work_time);

	stud->print();
	tch->print();
	
	delete stud;
	delete tch;
	return 0;
}
