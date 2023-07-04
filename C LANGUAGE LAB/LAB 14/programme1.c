#include<stdio.h>

int main()
{
    int data[10],i;
    for(i=0;i<10;i++)
    {
	 printf("Enter the next data\n");
	 scanf("%d",&data[i]);
    }
    for(i=0;i<10;i++)
    {
    	printf("The input data are:");
    	printf("%d",data[i]);
    	printf("\n");
	}
	    return 0;
}

