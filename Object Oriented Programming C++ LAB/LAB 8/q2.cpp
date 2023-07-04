 //WAP to demonstrate virtual function by creating a base class polygon which has
//virtual function area(). Two classes rectangle and triangle derived from polygon
//and they have area() to calculate and return the area of rectangle and triangle
//respectively.

#include <iostream>
using namespace std;
 
class Polygon
{
  protected:
    double width, height;
  public:
    void set_data (double a, double b)
    {
        width = a;
        height = b;
    }
    virtual double area() = 0;
};
 
class Rectangle: public Polygon
{
public:
    double area ()
    {
        return (width * height);
    }
};
 
class Triangle: public Polygon
{
public:
    double area ()
    {
        return (width * height)/2;
    }
};
 
int main ()
{
    Polygon   *sPtr;
	
    Rectangle Rect;
    sPtr = &Rect;
 
    sPtr -> set_data (7,3);
    cout << "Area of Rectangle is " << sPtr -> area() << endl;
 
    Triangle Tri;
    sPtr = &Tri;
 
    sPtr -> set_data (8,9);
    cout << "Area of Triangle is " << sPtr -> area() << endl;	
    return 0;
}
