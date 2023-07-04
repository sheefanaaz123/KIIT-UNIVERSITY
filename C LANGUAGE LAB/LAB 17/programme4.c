#include<stdio.h>
int main()
{
	int a=1,b=20;
	int *p;
	int *q;
	p=&a;
	q=&b;
	printf("The sum of two elements are:\n");
	printf("%d",*p+*q);
    return 0;
}
