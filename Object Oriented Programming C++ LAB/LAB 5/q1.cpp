#include<iostream>
using namespace std;

//class named point is created.
class Point
{
private:
int x,y;
public:
//constructor named Point.
Point(int x,int y)
{
this -> x=x;
this -> y=y;
}
//printing the value.
void display(){
	cout<<"x coordinate "<<x<<endl;
    cout<<"y coordinate "<<y<<endl;

}
};
//continuation of program
int main()
{
Point p (30,41);
p.display();
return 0;
}
