//WAP exhibiting object slicing for Vehicle
#include <iostream>
using namespace std;

class Vehicle {
	int model_no, price ;
};

class Car : public Vehicle {
	int year_of_manufacture, month_of_manufacture;
};

int main()
{
	Car c;
//  year_of_namufactureand month_of_manufacture of c are sliced off
	Vehicle v = c ;
}

