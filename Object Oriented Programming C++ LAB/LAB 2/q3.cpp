#include <iostream>
using namespace std;

int seg0and1_8085(int arr_8085[], int n_8085)     //function for segregation
{
	int count_8085= 0; 

	for (int i_8085 = 0; i_8085 < n_8085; i_8085++)
		if (arr_8085[i_8085] == 0)
			count_8085++;

	for (int i_8085 = 0; i_8085 <count_8085; i_8085++)
	   arr_8085[i_8085] = 0;

	for (int i_8085 = count_8085; i_8085 < n_8085; i_8085++)
		arr_8085[i_8085] = 1;
		
		return 0;
}

int main()
{
	int arr_8085[] = { 0, 1, 0, 1, 0, 0, 1, 1, 1, 0 };
	int n_8085 = sizeof(arr_8085) / sizeof(arr_8085[0]);

	seg0and1_8085(arr_8085, n_8085);
	cout << "After segregation the array is ::"<<endl;

	for (int i_8085 = 0; i_8085 < n_8085; i_8085++)
		cout <<arr_8085[i_8085]<< " ";                    //after segregation of 0 and 1
	
	return 0;
}


 
