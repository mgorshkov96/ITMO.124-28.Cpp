#pragma once

class Stack
{
private:
	static const int ARRAY_LENGTH = 10;
public:
	int length;
	int arr[ARRAY_LENGTH];

	void reset();
	bool push(int val);
	int pop();
	void print();
};

