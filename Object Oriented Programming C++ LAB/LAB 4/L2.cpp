#include <iostream>
#include <string>
using namespace std;

class Bill_8085
{
  private:
  int low_8085[3];
  int high_8085[3];

   public:
   void input_8085()
   {
   	//input
     cout<<"Enter the value of low slab 1 and high slab 1 : "<<endl;
     cin>>low_8085[0]>>high_8085[0];
     
     cout<<"Enter the value of low slab 2 and high slab 2 : "<<endl;
     cin>>low_8085[1]>>high_8085[1];
     
     cout<<"Enter the value of low slab 3 and high slab 3 : "<<endl;
     cin>>low_8085[2]>>high_8085[2];
     
     cout<<"Enter the value of low slab 4 and high slab 4 : "<<endl;
     cin>>low_8085[3]>>high_8085[3];
     
   }
   //printing the bill
   void display_8085()
   {
     	 cout<< "The total bill is ::" <<(high_8085[0]-low_8085[0])*1.5 + (high_8085[1]-low_8085[1])*2.5 + (high_8085[2]-low_8085[2])*3.5
		  + (high_8085[3]-low_8085[3])*4.5 <<endl;
   }
};

int main()
{
  Bill_8085 p;
  p.input_8085();
  p.display_8085();
  return 0;
}
