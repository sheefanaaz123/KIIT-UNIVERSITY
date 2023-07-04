#include<stdio.h>
int main(){
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter the elements in array 1 \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array 1 is :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
		printf("Enter the elements in array 2\n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The array 2 is :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		  c[i][j]=a[i][j]*b[i][j];
		}
	}

	printf("The third array is :\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
