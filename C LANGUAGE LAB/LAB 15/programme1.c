#include<stdio.h>
int main(){
	int i,j;
	int array[4][5];
	printf("Enter the elements of array:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("THE MATRIX IS :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",array[i][j]);
		}
			printf("\n");
	}
	
	
	return 0;
}
