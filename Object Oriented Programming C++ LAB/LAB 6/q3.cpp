#include <iostream>
using namespace std;

//class shape is created.
class Shape
{

private:
	int width;
	int height;
	
public:
	Shape(int Width, int Height){
		
		this->width=Width;
		this->height=Height;
		
	}
	int getWidth() 
	{
		
	return width;
	
	}
	int getHeight() 
	{
		
		return height;
		
	}
};


class Rectangle: public Shape
{
public:
   
    Rectangle(int width, int height):Shape(width,height)
    {
    }
    double area()
    {
        return (getWidth()*getHeight());
    }
};


class Triangle: public Shape
{
public:
    Triangle(double base, double height): Shape(base,height)
    {


    }
    double area()
    {
        return (getWidth()*getHeight())/2.0;
    }
};


int main ()
{
	Rectangle rectangle(4,2);
	Triangle triangle(9,7);
	cout <<"Area of Rectangle is :: "<< rectangle.area() << endl;
	cout <<"Area of Triangle is :: "<< triangle.area() << endl;

	return 0;
}
