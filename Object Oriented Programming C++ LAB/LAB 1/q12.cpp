#include<iostream>
using namespace std;

int main()
{  
    int array_8085[100], n_8085, i_8085, sum_8085= 0;    
    cout<<"Enter number of elements:: "<<endl;
    cin>>n_8085;
    
   
    cout<<"Enter elements ";
    for(i_8085= 0; i_8085 < n_8085; i_8085++)
          cin>>array_8085[i_8085];
          
  
    for(i_8085= 0; i_8085< n_8085; i_8085++)
          sum_8085 = sum_8085 + array_8085[i_8085 ];            //sum of elements
    
    cout<<"Sum of the elements of array is "<<sum_8085;
    
    return 0;
}
