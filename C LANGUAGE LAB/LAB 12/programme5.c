#include<stdio.h>

int fun(float a,int b)
{
 float p;
 p=a*b;
 printf("%f",p);
 return 0;
}
int main()
{
	float a;
	int b;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    fun(a,b);
    
    return 0;
}
