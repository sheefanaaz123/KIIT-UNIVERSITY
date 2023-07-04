//Define a class called Point that stores 3 coordinates x, y and z. WAP to
//overload Increment (++), Decrement (--) and Unary minus (-) operator.

#include <iostream>
using namespace std;

//Class Coordinate is created.

class Coordinate{
	private:
		int x,y,z;
	public:
// Parameterized constructor 
		Coordinate(int x, int y, int z ){
			this -> x = x;
			this -> y = y;
			this -> z = z;
		}
//overloading ++ operator
		void operator ++ (){
			x=x+1;
			y=y+1;
			z=z+1;
		}
//overloading -- operator
		void operator -- (){
			x=x-1;
			y=y-1;
			z=z-1;
		}
//overloading - operator
		void operator - (){
			x=-x;
			y=-y;
			z=-z;
		}
//Displaying the result
		void Display(){
			cout<<"X : "<<x<<endl;
			cout<<"Y : "<<y<<endl;
			cout<<"Z : "<<z<<endl;
		}
};

int main(){
	Coordinate c(6,3,4);
	++c;
	cout<<"\nINCREMENT (++) Operator\n";
	c.Display();
	--c;
	cout<<"\nDecrement (--) Operator\n";
	c.Display();
	-c;
	cout<<"\nUnary Minus (-) Operator\n";
	c.Display();
	return 0;
}


