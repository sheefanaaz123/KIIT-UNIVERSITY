#include <stdio.h>
int main()
{
	int n=5,i,j;
	for(i=0; i<n;i++)
	{
		for(j=0; j<n-1-i; j++)
		    printf(" ");
		for(j=0; j<2*i+1; j++)
		    printf("%d",i+1);
		for(j=0; j<n-1-i; j++)
		    printf(" ");
		for(j=0; j<n-1-i; j++)
		    printf(" ");
		for(j=0; j<2*i+1; j++)
		    printf("%d",i+1);
		printf("\n");
	}
	for(i=n-1; i>0; i--)

	{
		for(j=n-i; j>0; j--)
		    printf(" ");
		for(j=0; j<2*i-1; j++)
		    printf("%d",i);
		for(j=n-i; j>0; j--)
		    printf(" ");
		for(j=n-i; j>0; j--)
		    printf(" ");
		for(j=0; j<2*i-1; j++)
		    printf("%d",i);
		printf("\n");
	}
 return 0;
}
