//Define a class called String and WAP by overloading == operator to
//compare two strings.

#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;

class CompareString {

    public:
	
    	char str[25];

		CompareString(char str1[])
		{
	
		strcpy(this->str, str1);
		}

    	int operator == (CompareString s2)
		{
		if (strcmp(str, s2.str) == 0)
			return 1;
		else
			return 0;
		}
	
};

void compare(CompareString s1, CompareString s2)
{
	if (s1 == s2)
		cout << s1.str << " is equal to "<< s2.str << endl;
	else 
		cout << s1.str << " is not equal to "<< s2.str << endl;
}

void a()
{
	char str1[] = "yuyuyyyyyyyyyyyy";
	char str2[] = "oooooooooouuuuuu";

	CompareString s1(str1);
	CompareString s2(str2);

	cout << "Comparing " << s1.str << " and "<< s2.str << endl;

	compare(s1, s2);
}


void unequal()
{
	
	char str1[] = "red blue";
	char str2[] = "red blue";

	CompareString s1(str1);
	CompareString s2(str2);

	cout << "\nComparing " << s1.str << " and "<< s2.str << endl;

	compare(s1, s2);
}


int main()
{
	a();
	unequal();

	return 0;
}

