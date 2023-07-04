#include<stdio.h>
int main(){
	
	int i,j,a[6][6],b[6][6],c[6][6];
	printf("Enter the elements of matrix 1:\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix a:\n");
		for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elements of matrix 2:\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix b:\n");
		for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of two matrices a and b = matrice c :\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
