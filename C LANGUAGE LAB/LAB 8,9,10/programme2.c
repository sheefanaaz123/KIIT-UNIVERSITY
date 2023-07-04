#include<stdio.h>

int main()
{
	int i,n=7,j;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-i;j++)
    	printf("S");
    	for(j=0;j<i;j++)
    	printf(" ");
    	for(j=0;j<n-i;j++)
    	printf("S");
    	for(j=0;j<i;j++)
    	printf(" ");
    	for(j=0;j<n-i;j++)
    	printf("S");
    	
    	printf("\n");
	}
	
    return 0;
}
