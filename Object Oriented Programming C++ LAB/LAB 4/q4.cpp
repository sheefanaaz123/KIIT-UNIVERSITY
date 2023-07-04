#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
  private:
  int length;
  int breadth;

   public:
   void input()
   {
     cout<<"Enter the length"<<endl;
     cin>>length;
     cout<<"Enter the breadth"<<endl;
     cin>>breadth;
   }

   void display()
   {
     	 cout<< "AREA::" <<length*breadth<<endl;
     	 cout<< "PERIMETER::" <<2*(length+breadth);
   }
};

int main()
{
  Rectangle r;
  r.input();
  r.display();
  return 0;
}
