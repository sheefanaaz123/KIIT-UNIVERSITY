//WAP to demonstrate Upcasting

#include <iostream>  
using namespace std;  
class Base  
{  
    public:  
        void display()  
    {  
        cout << "Super function of the Base class ";  
    }  
};  
  
class Derive : public Base  
{  
    public:  
        void display()  
        {  
            cout << "\nDerive class function ";  
        }  
      
};  
  
int main ()  
{  

    Base *ptr;  
      
    Derive obj; 
    ptr = &obj; 
      
  
     Base &ref = obj;   
     ptr->display();  
    return 0;  
}  

