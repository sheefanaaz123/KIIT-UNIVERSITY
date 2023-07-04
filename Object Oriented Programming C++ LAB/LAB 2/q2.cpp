#include <iostream>  
using namespace std;  

int main()  
{  
int n_8085, sum_8085 = 0;    
cout<<"Enter the number: ";    
cin>>n_8085;    
while(n_8085!=0)    
{    
sum_8085 = sum_8085 + n_8085%10;   //sum of digits 
n_8085 = n_8085/10 ;   
}    

cout<<"Sum of digit is "<<sum_8085<<endl;   
 
return 0;  
}  
