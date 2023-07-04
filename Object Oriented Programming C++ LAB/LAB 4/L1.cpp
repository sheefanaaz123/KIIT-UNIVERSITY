#include <iostream>
#include <string>
using namespace std;

class Box_8085
{
  private:
  int length_8085;
  int width_8085;
  int height_8085;

   public:
   void input_8085()
   {
   	//input
     cout<<"Enter the length"<<endl;
     cin>>length_8085;
     cout<<"Enter the width"<<endl;
     cin>>width_8085;
     cout<<"Enter the height"<<endl;
     cin>>height_8085;
   }
   //printing the volume
   void display_8085()
   {
     	 cout<< "VOLUME OF THE BOX ::" <<length_8085*height_8085*width_8085<<endl;
   }
};

int main()
{
  Box_8085 b;
  b.input_8085();
  b.display_8085();
  return 0;
}
