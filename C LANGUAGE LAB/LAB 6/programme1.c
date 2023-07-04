#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("Enter the value of first side\n");
	scanf("%d",&a);
	printf("Enter the value of second side\n");
	scanf("%d",&b);
	printf("Enter the value of third side\n");
	scanf("%d",&c);
	t=((a+b>c)+(b+c>a)+(c+a>b))/3;
	printf("Display the value 1 if those are side of the triangle else 0  =  %d",t);

    return 0;
}

