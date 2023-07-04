#include <iostream>
using namespace std;

void rotate_8085(int ar_8085[], int d_8085, int n_8085)
{ 
	int temp_8085[n_8085];

	int k_8085 = 0;                                           //function

	for (int i_8085 = d_8085; i_8085 < n_8085; i_8085++) {
		temp_8085[k_8085] = ar_8085[i_8085];
		k_8085++;
	}


	for (int i_8085 = 0; i_8085 < d_8085; i_8085++) {
		temp_8085[k_8085] = ar_8085[i_8085];
		k_8085++;
	}

	for (int i_8085 = 0; i_8085 < n_8085; i_8085++) {
		ar_8085[i_8085] = temp_8085[i_8085];
	}
}

void PrintTheArray_8085(int ar_8085[], int n_8085)
{
	for (int i_8085 = 0; i_8085 < n_8085; i_8085++) {
		cout << ar_8085[i_8085] << " ";
	}
}

int main()
{
	int ar_8085[] = { 1, 2, 3, 4, 5, 6, 7 };
	int N_8085 = sizeof(ar_8085) / sizeof(ar_8085[0]);
	int d_8085 = 1;

	rotate_8085(ar_8085, d_8085, N_8085);
	PrintTheArray_8085(ar_8085, N_8085);

	return 0;
}

