//WAP exhibiting object slicing for Animal
#include <iostream>
using namespace std;

class Animal {
	char name; 
};

class Lion : public Animal {
	char country;
	char age;
};

int main()
{
	Lion l;
	//  country and age of l are sliced off
	Animal a = l ;
	return 0;
}

