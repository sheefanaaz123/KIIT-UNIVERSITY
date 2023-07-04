#include<stdio.h>

int main()
{
	int a,b,c,max;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
	max=a;
	if(b>a)
	max=b;
	if(c>max)
	max=c;
	
	printf("The maxiumum number is %d",max);
	   
    return 0;
}


