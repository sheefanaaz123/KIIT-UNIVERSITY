#include<stdio.h>
int main(){
	int i,j,t;
	int array[4][4];
	printf("Enter the elements of array:\n");
	for(i=0;i<4;i++)
	{
	for(j=0;j<4;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("THE MATRIX IS :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",array[i][j]);
		}
			printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			t=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=t;
		}
	}
	printf("THE NEW MATRIX  AFTER TRANSPOSE IS :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",array[i][j]);
		}
			printf("\n");
	}
	
return 0;	

}
