#include<stdio.h>

void display3(int n)
   {
   	int i;
   	for(i=0;i<n;i++)
   	  printf("=");
	printf("\n");
    
	return;
}
int main()
{
	int a=10,b=50;
	display3(20);
	display3(a);
	display3(a+b+2);    
    return 0;
}


