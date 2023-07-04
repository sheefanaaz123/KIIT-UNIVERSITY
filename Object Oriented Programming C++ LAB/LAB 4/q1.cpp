/*WAP to read the name and age of a person from keyboard and display the input value. */
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
     cout<<"Enter name";
     cin>>name;
     cout <<"Enter age";
     cin>>age;
   }

   void display()
   {
     cout <<"NAME::"<< name << endl;
	 cout<< "AGE::" <<age;
   }
};

int main()
{
  Person p;
  p.input();
  p.display();
  return 0;
}
