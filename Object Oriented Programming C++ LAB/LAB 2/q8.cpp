#include<iostream>
using namespace std;

int GCD_8085( int i_8085, int j_8085){
   if(j_8085>i_8085)
      return GCD_8085(j_8085,i_8085);
   if(j_8085==0)
      return i_8085;                              //GCD function
   else
      return GCD_8085(j_8085,i_8085%j_8085);
}
 	
 
int main(){
   int x_8085,y_8085;
   cout<<"Enter the two numbers :: ";
   cin>>x_8085>>y_8085;
   cout<<endl<<"GCD is "<<GCD_8085(x_8085,y_8085);
   return 0;
}


