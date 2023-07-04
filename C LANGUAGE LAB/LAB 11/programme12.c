//4. WAP to add two numbers entered through keyboard by using a suitable user defined function
//( say SUM) for addition operation.
#include<stdio.h>
 void SUM(int a,int b)
 {
 	printf("%d",a+b);
 }
int main()
{
	int a,b;
    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);
    printf("sum is\n");
    SUM(a,b);
    return 0;
}

