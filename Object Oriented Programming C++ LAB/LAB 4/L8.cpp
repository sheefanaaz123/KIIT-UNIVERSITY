#include <iostream>
#include <string>
using namespace std;

class Occurence_8085
{
  private:
  int n_8085;
  int largest_8085;
  int count_8085;
  
  public:
  void input_8085()
   {
   	//input
     cout<<"Enter the Number\n";
     cin>>n_8085;
   }
   //finding the largest number
   void Largest_8085()
   {
   	int r_8085,rem_8085, l_8085=0;
    while (n_8085 > 0)
    {
   r_8085 = n_8085 % 10;
   if (l_8085 < r_8085)
      {
       l_8085 = r_8085;
     }
     n_8085 = n_8085 / 10;
    }
    cout<<"The Largest Digit is : \n";
	cout<<l_8085; 
	
	while(n_8085) {
        int rem_8085 = n_8085%10; 
        if(rem_8085==l_8085){
            count_8085=count_8085+1;
        }
        n_8085=n_8085/10; 
    }
    cout<<"\nTHE NO. OF OCCURENCE IS :: "<< count_8085;
		 
}
};

int main()
{
	
  Occurence_8085 o;
  o.input_8085();
  o.Largest_8085();
  
  return 0;
}
