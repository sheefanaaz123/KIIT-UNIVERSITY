#include<stdio.h>
int main()
{
	int a[5][5],i,j,max=0;
    printf("Enter the elements of the matrix:\n");
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The matrix:\n");
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
    	for (i = 0; i<5; i++)
    	{
        	for (j = 0; j<5; j++){
        		if (a[i][j]>max)
				max = a[i][j];
			}
		}

	printf("Largest element is  %d", max);


	return 0;
}
