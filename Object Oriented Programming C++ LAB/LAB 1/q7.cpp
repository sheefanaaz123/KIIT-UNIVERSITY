#include <iostream>  
using namespace std;  
int main()  
{  
   int i_8085,factorial_8085=1,n_8085;    
   cout<<"Enter any Number: "<<endl;    
   cin>>n_8085;    
   for(i_8085=1;i_8085<=n_8085;i_8085++){      // factorial of 5 is 5*4*3*2*1
      factorial_8085=factorial_8085*i_8085;    
   }    
   cout<<"Factorial of " <<n_8085<<" is "<< factorial_8085;  
   return 0;  
}  
