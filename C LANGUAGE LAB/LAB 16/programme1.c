#include<stdio.h>
int main(){
	int i;
	int a[4],b[4];
	printf("Enter the elements of the array:\n");
	for(i=0;i<4;i++){
	
			scanf("%d",&a[i]);
		}
	
	printf("Array:\n");
	for(i=0;i<4;i++){
		
			printf("%d ",a[i]);
		}
		printf("\n");
	
	
	for(i=0;i<4;i++){
	
			b[i]=a[4-i-1];
		}
		printf("Array after reverse:\n");
		
		for(i=0;i<4;i++){
		
			printf("%d ",b[i]);
		}
		printf("\n");
	return 0;
}
