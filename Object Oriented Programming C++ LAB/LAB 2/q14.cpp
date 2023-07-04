#include <iostream>
using namespace std;

int pow_8085(int x_8085, int y_8085)
{
	
	if (y_8085== 0)
		return 1;                   //function
	
	if (x_8085== 0)
		return 0;
	
	return x_8085* pow_8085(x_8085, y_8085 - 1);
}

int main()
{
	int x_8085 = 2;
	int y_8085= 3;
	cout <<"RESULT::"<<(pow_8085(x_8085, y_8085));     //function calling
}
