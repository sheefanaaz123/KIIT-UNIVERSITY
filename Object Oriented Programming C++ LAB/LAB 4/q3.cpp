//WAP to read the radius of a circle from keyboard and display the area &
//perimeter.

#include <iostream>
#include <string>
using namespace std;

class Circle
{
  private:
  int radius;

   public:
   void input()
   {
     cout<<"Enter the radius"<<endl;
     cin>>radius;
   }

   void display()
   {
     	 cout<< "AREA::" <<3.14*radius*radius<<endl;
     	 cout<< "PERIMETER::" <<2*3.14*radius;
   }
};

int main()
{
  Circle c;
  c.input();
  c.display();
  return 0;
}
