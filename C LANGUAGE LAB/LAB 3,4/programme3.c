#include<stdio.h>
#define pi 3.14
int main()
{
	int radius;
	float area,perimeter;
	printf("Enter the radius :\n");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("Area of the circle is %.2f sq. units.",area);
	perimeter=2*pi*radius;
	printf("\nPerimeter of the circle is %.2f unit.",perimeter);
	  
    return 0;
}

