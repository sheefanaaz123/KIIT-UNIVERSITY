#include <iostream>
#include <string>
using namespace std;

class Person
{
  private:
  string name;
  int age;

   public:
   void input()
   {
     cout<<"Enter name"<<endl;
     cin>>name;
     cout <<"Enter age"<<endl;
     cin>>age;
   }

   void display()
   {
     cout <<"NAME:: "<< name <<endl;
	 cout<<"AGE:: " <<age<<endl;
	 cout<<"-------------------------"<<endl;
   }
};

int main()
{
  Person p;
  p1.input();
  p.display();
  
  Person p1;
  p1.input();
  p1.display();
  
  Person p2;
  p2.input();
  p2.display();
  
  
  return 0;
}
