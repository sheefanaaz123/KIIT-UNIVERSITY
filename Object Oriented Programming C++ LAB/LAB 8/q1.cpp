  //Using the concept of pointers, WAP to swap the private data values of two objects of
//the same class type.
#include <iostream>

using namespace std;

class Swap {
	int temp, a, b;

public:
	
	Swap(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	
	friend void swap(Swap &s1){
	cout << "\nBefore Swapping: " << s1.a << " and " << s1.b;

	s1.temp = s1.a;
	s1.a = s1.b;
	s1.b = s1.temp;
	cout << "\nAfter Swapping: " << s1.a << " and " << s1.b;
    }
};

int main()
{
	Swap s(1, 2);
	swap(s);
	return 0;
}

