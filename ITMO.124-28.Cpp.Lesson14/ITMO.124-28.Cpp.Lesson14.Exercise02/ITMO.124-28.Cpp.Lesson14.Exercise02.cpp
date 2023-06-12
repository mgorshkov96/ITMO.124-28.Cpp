#include <iostream>
#include <vector>

template<class T>
void print(const T&, std::string);

int main() {
	std::vector<int> data = { 1, 2, 3, 4, 5 };
	print(data, ", "); 
	return 0;
}

template<class T>
void print(const T& data, std::string delimiter) 
{
	if (!data.empty())
	{
		for (const auto& value : data)
		{
			if (value != *data.begin())
			{
				std::cout << delimiter;
			}
			std::cout << value;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cerr << "Data hasn't got values";
	}
}