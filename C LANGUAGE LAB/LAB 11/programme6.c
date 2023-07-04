#include<stdio.h>

void display4(int n,char ch)
{
	int i;
	for(i=0;i<n;i++)
	 printf("%c",ch);
	printf("\n");
}
int main()
{
	int a=10,b=5;
	display4(20,'$');
	display4(a,'+');
    display4(a+b*2,'Y');
    return 0;
}


