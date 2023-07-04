#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i , *ptr, sum=0;
	printf("Enter number of elements :: \n");
	scanf("%d",&n);
	ptr= (int*)malloc(n*sizeof(int));
	printf("\nEnter elements of array :: \n");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}
	
	printf("The sum of the elements of array = %d",sum);
	
	
	
	
	
	return 0;
}
