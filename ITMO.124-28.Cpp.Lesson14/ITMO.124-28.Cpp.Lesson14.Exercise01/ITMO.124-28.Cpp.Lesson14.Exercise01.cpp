#include <iostream>

template<class T>
T getAvg(const T arr[], const int& size);

int main()
{
	int intArr[] = { 9,3,17,6,5,4,31,2,12 };
	double doubleArr[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char charArr[] = "Hello";

	int intSize = sizeof(intArr) / sizeof(intArr[0]);
	int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
	int charSize = sizeof(charArr) / sizeof(charArr[0]) - 1;

	auto intAvg = getAvg(intArr, intSize);
	auto doubleAvg = getAvg(doubleArr, doubleSize);
	auto charAvg = getAvg(charArr, charSize);

	std::cout << "Int average: " << intAvg << std::endl;
	std::cout << "Double average: " << doubleAvg << std::endl;
	std::cout << "Char average: " << charAvg << std::endl;
}

template<class T>
T getAvg(const T arr[], const int& size)
{
	T sum = (T)0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}