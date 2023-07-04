//WAP exhibiting virtual destructor
#include <iostream>
using namespace std;
class Base {
public:
	Base()	
	{ cout << "Constructing base\n"; }
	virtual ~Base()
	{ cout << "Destructing base\n"; }	
};

class Derived : public Base {
public:
	Derived()	
	{ cout << "Constructing derived\n"; }
	virtual ~Derived()
	{ cout << "Destructing derived\n"; }
};

int main()
{
Derived *d = new Derived();
Base *b = d;
delete b;
return 0;
}

