#pragma once

class A
{
public:
	A() : arr(nullptr), length(0) {}
	A(int len);
	~A();
	int size() const;
	int& operator[](int idx) const;
private:
	int* arr;
	int length;
};

