#include "A.h"
#include <iostream>

A::A(int len) : length(len)
{
	A::arr = new int[len];
	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}

A::~A()
{
	delete arr;
}

int A::size() const
{
	return A::length;
}

int& A::operator[](int idx) const
{
	if (idx < 0 || idx >= A::length)
	{
		std::cout << "Index out of range" << std::endl;
		exit(1);
	}
	return arr[idx];
}