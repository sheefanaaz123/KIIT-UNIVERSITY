#include <iostream>
using namespace std;

int array_sum_8085(int arr_8085[2][2])
{
	int i_8085, j_8085;
	int sum_8085 = 0;
    	for (i_8085 = 0; i_8085 < 2; ++i_8085) {
		for (j_8085 = 0; j_8085 < 2; ++j_8085) {        //function for sum

			sum_8085 += arr_8085[i_8085][j_8085];
		}
	}
	return sum_8085;
}

int main()
{
	int i_8085, j_8085;
	int arr_8085[2][2];

	int x_8085 = 1;
	for (i_8085 = 0; i_8085 < 2; i_8085++)
		for (j_8085 = 0; j_8085 < 2; j_8085++)    //elements of matrix
			arr_8085[i_8085][j_8085] = x_8085++;

	cout<<"THE MATRIX IS "<<endl;
	for (i_8085 = 0; i_8085 < 2; i_8085++){
		for (j_8085 = 0; j_8085 < 2; j_8085++){     //printing matrix
			cout<<arr_8085[i_8085][j_8085]<<" ";
         }
         cout<<endl;
  	}
		
	cout <<endl<<"THE SUM OF MATRIX IS::"<<array_sum_8085(arr_8085); //sum
	return 0;
}

