#include <iostream>
using namespace std;

class Time {
	int hrs, mins;

public:

	Time(int a, int b)
    {
	hrs = a;
	mins = b;
    }
	operator int();
	~Time()
	{
		cout << "Destructor is called\n";
	}
};
Time::operator int()
{
	cout << "Class to Primitive Type\n";
	return (hrs * 60 + mins);
}
void TypeConversion(int hour, int mins)
{
	int duration;

	Time t(hour, mins);

	duration = t;
	cout << "Total Minutes are "<< duration << endl;
	duration = t.operator int();

	cout << "Total Minutes are "<< duration << endl;

	return;
}
int main()
{
	int hour, mins;
	hour = 2;
	mins = 20;

	TypeConversion(hour, mins);

	return 0;
}

