#include<iostream>
using namespace std;

void sort_8085(int a_8085[10], int n_8085)
{
 int i_8085, j_8085, temp_8085;
 for(i_8085=0;i_8085< n_8085-1;i_8085++)
 {                                                   //function
  for(j_8085=i_8085+1;j_8085< n_8085;j_8085++)
  {
   if(a_8085[i_8085]>a_8085[j_8085])
   {
    temp_8085 = a_8085[i_8085];
    a_8085[i_8085] = a_8085[j_8085];
    a_8085[j_8085] = temp_8085;
   }
  }
 }
}

int main()
{
 int a_8085[100], i_8085, n_8085;
 
 cout<<"Enter the elements ::";
 cin>>n_8085;
 
 for(i_8085=0;i_8085< n_8085;i_8085++)
 {
  cin>>a_8085[i_8085];                 //entering element
 }
 
 sort_8085(a_8085,n_8085);                 // calling function
 
 cout<<"After sorting  : ";
 for(i_8085=0;i_8085< n_8085;i_8085++)
 {
  cout<<a_8085[i_8085]<<" ";
 }
 
 return 0;
}


