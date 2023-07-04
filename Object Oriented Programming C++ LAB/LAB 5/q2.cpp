//Define a class called Complex that stores real and imaginary part of the
//complex number. WAP that uses overloaded constructors for initializing the
//class objects and also display the part.

#include <iostream>
using namespace std;
//class named complex is created.
class Complex{
   private:
   int real;
   int img;
   public:
//constructor named Point.
   Complex(){
      real = 1;
      img = 1;
   }
   Complex(int a, int b){
      real=a;
      img=b;
   }
//printing the values.
   void display(){
      cout << "The Complex Number is: " << real <<" + "<<img<<" i " <<endl;
   }
};
//continuation of program
int main(){
   Complex c1;
   Complex c2(2, 6);
   c1.display();
   c2.display();
   return 0;
}
