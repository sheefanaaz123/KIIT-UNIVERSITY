#include<stdio.h>

int main(){
	
	int n, i, num, index;

	printf("Enter the number of elements in the list\n");
	scanf("%d",&n);
	
	int list[n];

	printf("Enter the elements of list\n");
	for (i=0; i<n ; i++){
		scanf("%d",&list[i]);
	}
	
	printf("Enter the number to search\n");
	scanf("%d",&num);


	for(i=0; i<n; i++){
		if(num==list[i]){
		   index = i;	
		}
	}
	
	printf("\nHighest Index of %d in list is %d",num,index);
	
	return 0;
}
