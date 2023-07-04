#include <iostream>
using namespace std;

void splitArr_8085(int arr_8085[], int n_8085, int k_8085)
{
	for (int i_8085 = 0; i_8085 < k_8085; i_8085++) {
		int x_8085 = arr_8085[0];                                   //function
		for (int j_8085 = 0; j_8085 < n_8085 - 1; ++j_8085)
			arr_8085[j_8085] = arr_8085[j_8085 + 1];
		arr_8085[n_8085 - 1] = x_8085;
	}
}

int main()
{
	int arr_8085[] = { 1, 2, 3, 4, 5, 6 };
	int n_8085 = sizeof(arr_8085) / sizeof(arr_8085[0]);
	int position_8085 = 3;                                    //position

	splitArr_8085(arr_8085, n_8085, position_8085);

	for (int i_8085 = 0; i_8085 < n_8085; ++i_8085)
		cout <<" "<< arr_8085[i_8085];

	return 0;
}


