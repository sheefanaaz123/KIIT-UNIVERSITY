#include <iostream>
using namespace std;
 // base class
class Plate
{
  public:
    Plate()
    {
      cout << "Plate Constructor." << endl;
    }
};
class box: public Plate
{  
public:
    box()
    {
      cout<<"Box Constructor."<<endl;
    }
};
class Woodenbox: public box {
   public:
     Woodenbox()
     {
       cout<<"Woodenbox Constructor."<<endl;
     }
};
 // main function
int main()
{   
    Woodenbox wb;
    return 0;
}

















