#include<stdio.h>
 
int main()
{
 	int i,j,a[3][4],N;
  
 	
 
 	printf("Enter the Elements of matrix: \n");
 	for(i=0;i<3;i++)
  	{
   		for(j=0;j<4;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
    printf("The matrix is :\n");
    for(i=0;i<3;i++)
  	{
   		for(j=0;j<4;j++)
    	{
      		printf("%d  ",a[i][j]);
    	}
    	printf("\n");
  	}
    
 	printf("Enter the scaler value:  ");
 	scanf("%d", &N);
 	  
 	for(i= 0;i<3;i++)
  	{
   		for(j=0;j<4;j++)
    	{
      		a[i][j] = N*a[i][j];    
   	 	}
  	}
 
 	printf("\nThe New matrix after multiplication with %d is : \n",N);
 	for(i= 0; i<3;i++)
  	{
   		for(j = 0; j<4; j++)
    	{
      		printf("%d  ",a[i][j]);
    	}
    	printf("\n");
  	}
 	return 0;
}
