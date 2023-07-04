//Define a class called Complex that stores the real and imaginary part. WAP
//to add, subtract, divide and multiply two or more complex objects.

#include <iostream>
using namespace std;

//class Complex is created.

class Complex {
	public:
       float real;
       float img;
       
       Complex(){
       }

//overloading "+" operator with complex return type.
       Complex operator + (Complex &obj){
          Complex t;
          t.img = img + obj.img;
          t.real = real + obj.real;
          return t;
       }

//overloading "-" operator with complex return type.
      Complex operator-(const Complex &obj){
         Complex t;
         t.img = img - obj.img;
         t.real = real - obj.real;
         return t;
       }
//overloading "*" operator with complex return type.
      Complex operator * (const Complex &obj){
        Complex t;
        t.img = img *  obj.img;
        t.real = real * obj.real;
        return t;
      }
  
//overloading "/" operator with complex return type.
     Complex operator / (const Complex &obj){
       Complex t;
       t.img = img /  obj.img;
       t.real = real / obj.real;
       return t;
     }
//printing the resullt.
    void display_result(){
    cout <<"Result : "<< real << " + " << img << "i" << endl;
    }
};
 
int main()
{
  Complex c1, c2, c3;
  
  cout << "Enter real and complex part of the 1st complex number: " << endl;
  cin >> c1.real;
  cin >> c1.img;

  cout << "Enter real and complex part of the 2nd complex number: " << endl;
  cin >> c2.real;
  cin >> c2.img;

  cout << "\nAddition:\n";
  c3 = c1+c2;
  c3.display_result();

  cout << "\nSubtraction: \n";
  c3 = c1-c2;
  c3.display_result();
  
  cout << "\nMultiplication \n";
  c3 = c1*c2;
  c3.display_result();
  
  cout << "\nDivision:\n";
  c3 = c1/c2;
  c3.display_result();

  return 0;
}
