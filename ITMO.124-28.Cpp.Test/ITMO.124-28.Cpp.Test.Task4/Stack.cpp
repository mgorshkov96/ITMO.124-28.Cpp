#include "Stack.h"
#include <iostream>

void Stack::reset()
{	
	Stack::length = 0;

	for (int i = 0; i < Stack::ARRAY_LENGTH; i++)
	{
		Stack::arr[i] = 0;
	}
}

bool Stack::push(int val)
{
	if (Stack::length < Stack::ARRAY_LENGTH)
	{
		Stack::arr[length] = val;
		length++;
		return true;
	}
	else
	{
		return false;
	}
}

int Stack::pop()
{
	int result;
	if (length > 0)
	{
		length--;
		result = Stack::arr[length];
		Stack::arr[length] = 0;
	}
	else
	{
		result = -999;
		std::cout << "There are no elements in the stack" << std::endl;
	}
	return result;
}

void Stack::print()
{
	std::cout << "( ";
	for (int i = 0; i < Stack::length; i++)
	{
		std::cout << Stack::arr[i] << " ";
	}
	std::cout << ")" << std::endl;
}