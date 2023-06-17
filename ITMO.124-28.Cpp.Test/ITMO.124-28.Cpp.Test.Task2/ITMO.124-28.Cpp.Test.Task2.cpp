#include <windows.h>
#include <iostream>

class Distance	
{
private:
	const float MTF;     
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }

	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters;      
		feet = int(fltfeet);				
		inches = 12 * (fltfeet - feet);		 
	}
	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	
	void getdist()
	{
		std::cout << "\nEnter feets: "; 
		std::cin >> feet;
		std::cout << "Enter inches: ";  
		std::cin >> inches;
	}
	
	void showdist() const
	{
		std::cout << feet << "\'-" << inches << '\"';
	}

	Distance operator+ (Distance) const;

	/*explicit*/  operator float() const
	{
		float fracfeet = inches / 12;	
		fracfeet += static_cast<float>(feet); 
		return fracfeet / MTF;	

	}

	void operator= (const Distance& dist) 
	{
		Distance::feet = dist.feet;
		Distance::inches = dist.inches;
	}
};

Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;	
	float i = inches + d2.inches; 
	if (i >= 12.0)	
	{
		i -= 12.0;	
		f++;	
	}
	return Distance(f, i);      
}

int main()
{
	Distance d1;
	Distance d2;

	d1.getdist();
	d2 = d1;

	d2.showdist();

	return 0;
}