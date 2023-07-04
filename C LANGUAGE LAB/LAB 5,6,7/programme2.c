#include<stdio.h>

int main()
{
	int a,b,c,t,s;
	printf("Enter the value of first side\n");
	scanf("%d",&a);
	printf("Enter the value of second side\n");
	scanf("%d",&b);
	printf("Enter the value of third side\n");
	scanf("%d",&c);
	t=((a+b>c)+(b+c>a)+(c+a>b))/3;
	s=(a+b+c);
	printf("Display sum of all sides if they are sides of the triangle else display 0  = %d",s);   
	return 0;
}




