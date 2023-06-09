#include <string>
#include <sstream>
#pragma once 

class Human {
public:
	Human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " " << this->name << " " << this->second_name;
		return full_name.str();
	}
	virtual void print()
	{
		std::cout << get_full_name();
	}
private:
	std::string name; 
	std::string last_name; 
	std::string second_name; 
};