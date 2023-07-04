#include <iostream>

using namespace std;
 
int main()
{
  int arr_8085[100][100],d1_8085=0, d2_8085 = 0,i_8085,j_8085,n_8085;
  cout << "Enter no. of rows and column:: \n";
  cin>>n_8085;
  
  cout<<"ENTER THE ELEMENTS::";
  for(i_8085=0; i_8085<n_8085 ; i_8085++){
    for(j_8085=0; j_8085<n_8085; j_8085++){
      cin >> arr_8085[i_8085][j_8085];
      if(i_8085==j_8085)
        d1_8085 +=arr_8085[i_8085][j_8085];      //SUM OF DIAGONAL 1
      if((i_8085+j_8085) == n_8085-1)             
        d2_8085 += arr_8085[i_8085][j_8085];      //SUM OF DIAGONAL 2
    }
  }

  cout << "Sum of diagonals element is  = "<< d1_8085+d2_8085<< endl;
 
  return 0;
}
