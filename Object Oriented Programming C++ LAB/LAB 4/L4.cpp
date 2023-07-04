#include <iostream>
#include <string>
using namespace std;

class Currency_8085
{
  private:
  int amount_8085;
  
   public:
   void input_8085()
   {
   	//input
     cout<<"Enter the total amount  :: "<<endl;
     cin>>amount_8085;
     
   }
   
   //printing the total number of
   //notes of each denomination 
   void display_8085()
   {
     	 cout<<"The total number of notes ::" <<endl;
     	 cout<<"100 RUPEE NOTE  "<< amount_8085 / 100 <<endl;
		 cout<<"50 RUPEE NOTE  "<<(amount_8085 % 100 )/ 50 <<endl;
		 cout<<"10 RUPPEE NOTE  "<< amount_8085 % 100 % 50 / 10 ;
		 
   }
};

int main()
{
  Currency_8085 p;
  p.input_8085();
  p.display_8085();
  return 0;
}
