#include<stdio.h>

void display6(int n,char ch)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",ch);
	printf("\n");
}
int main()
{
	int a=10,b=5;
	display6(20,5);
	display6('a',48);
    display6('5','Y');
    return 0;
}




