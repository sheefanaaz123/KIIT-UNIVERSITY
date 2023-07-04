#include<iostream>
using namespace std;

int main(){
   int n_8085,r_8085,x_8085,sum_8085=0;
   cout<<"Enter the number::";
   cin>>n_8085;
   x_8085=n_8085;
   while(n_8085>0){
      r_8085=n_8085%10;                               //remainder of a number
      sum_8085=sum_8085+(r_8085*r_8085*r_8085);       //sum of the cube of remainder
      n_8085=n_8085/10;                               //divide the number by 10
   }
   if(x_8085==sum_8085)
      cout<<"Armstrong number";
   else
      cout<<"Not a Armstrong number";
   return 0;
}
