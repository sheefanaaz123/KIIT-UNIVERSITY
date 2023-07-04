#include<stdio.h>

int main(){
	
	int n,x;
    printf("Enter the number of elements in the list\n");
	scanf("%d",&n);
	
	int A[n];	
	
	printf("Enter the elements of list\n");
	for (x=0; x<n ; x++){
		scanf("%d",&A[x]);
	}
	
	
	int k,j;
	
	for(k = 0; k< n; k++){
		if(A[k+1]<A[k]){
			printf("k value is %d\n", k+1);
		 	exit(0);
		}
    }
		 	
		

	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	

