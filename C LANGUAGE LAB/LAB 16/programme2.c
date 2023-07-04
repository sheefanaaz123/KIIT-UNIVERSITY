#include<stdio.h>
int main(){
	int i,j,a[5][5],largest;
	printf("Enter the elements in 2-D array:\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
			
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	largest=a[0][0];
	if (a[1][1]>a[0][0]){
		largest=a[1][1];
	}
	if (a[2][2]>a[0][0]){
		largest=a[2][2];
	}
	if (a[3][3]>a[0][0]){
		largest=a[3][3];
	}
	if (a[4][4]>a[0][0]){
		largest=a[4][4];
	}
	
	printf("\nThe largest element in the diagonal is %d",largest);

	return 0;
}
