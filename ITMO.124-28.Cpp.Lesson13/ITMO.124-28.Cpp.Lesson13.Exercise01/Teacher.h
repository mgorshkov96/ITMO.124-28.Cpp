#pragma once
#include "human.h"
#include <string>

class Teacher : public Human {
public:
	Teacher(
		std::string last_name,
		std::string name,
		std::string second_name,		
		unsigned int work_time
	) : Human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void print()
	{
		Human::print();
		std::cout << "\nWork time: " << Teacher::get_work_time() << std::endl;
	}
private:
	unsigned int work_time;
};

