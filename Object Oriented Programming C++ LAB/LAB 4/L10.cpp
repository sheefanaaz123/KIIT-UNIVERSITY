#include<iostream>
using namespace std;

class Complex_8085{
public:
    int real_8085;
    int imaginary_8085;
     //enter the values
     void set_8085()
    {
        cin>>real_8085;
        cin>>imaginary_8085;
    }

    // adding two complex numbers 
 
    void sum_8085(Complex_8085 c1, Complex_8085 c2)
    {
        real_8085=c1.real_8085+c2.real_8085;
        imaginary_8085=c1.imaginary_8085+c2.imaginary_8085;
    }
    
    //printing the complex no.
    void disp_8085()
    {
    	cout<<"Complex Nimber: ";
        cout<<real_8085<<" + "<<imaginary_8085<<" i "<<endl;
    }
    
    };
int main()
    {
        Complex_8085 c1,c2,c3;
        cout<<"Enter real and imaginary part of complex number 1"<<endl;
        c1.set_8085();
        cout<<"Enter real and imaginary part of complex number 2"<<endl;
        c2.set_8085();
        cout<<"Sum of two complex numbers is"<<endl;
        c3.sum_8085(c1,c2);
        c3.disp_8085();
    return 0;
    }
