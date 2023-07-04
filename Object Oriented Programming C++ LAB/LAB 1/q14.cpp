#include <iostream>
using namespace std;

int main() {

  int i_8085,N_8085;
  int arr_8085[20];

  cout << "Enter number of element in 1D array ::";    
  cin >> N_8085;                                           //enter the number of elements you want in 1D array
  cout << "\n";

  cout << "Enter the elements in 1D array ::";
  
  for(i_8085 = 0; i_8085< N_8085; i_8085++) {
    cin >> arr_8085[i_8085];                             //Enter the elements in array
  }

  
  for(i_8085 = 1;i_8085 < N_8085; i_8085++) {
    if(arr_8085[0] > arr_8085[i_8085])                   //if the element is smaller than element in 0th index,
      arr_8085[0] = arr_8085[i_8085];                     //then  make that element the 0th element.
	    }

  cout <<"Smallest element is 1D array is"<<" " << arr_8085[0];

  return 0;
}

