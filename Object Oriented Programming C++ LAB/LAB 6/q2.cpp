#include <iostream>
using namespace std;
//class mother is created.
class mother{
public:
	void display ()
	{
		cout << "I am a mother.\n";
	}
};

class daughter : public mother{
public:
	void display ()
	{
		mother :: display();
		cout << "I am a daughter.\n";
	}
};

int main ()
{
	daughter a;
	a.display();
	return 0;
}
