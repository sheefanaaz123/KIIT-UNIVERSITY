#include <iostream>
using namespace std;

int Sum_8085(int arr_8085[], int N_8085)
{
	if (N_8085 <= 0)                  //function
		return 0;
	return (Sum_8085(arr_8085, N_8085 - 1) + arr_8085[N_8085 - 1]);
}

int main()
{
	int arr_8085[] = { 1, 2, 3, 4, 5 };
	int N_8085 = sizeof(arr_8085) / sizeof(arr_8085[0]);
	cout<<"The sum is :: "<<Sum_8085(arr_8085, N_8085);   //function calling
	return 0;
}

