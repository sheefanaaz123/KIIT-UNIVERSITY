#include<stdio.h>

int main(){
	
	int n,x, key, i,j;
	
    printf("Enter the number of elements in the list\n");
	scanf("%d",&n);
	
	int A[n];	
	
	printf("Enter the elements of list\n");
	for (x=0; x<n ; x++){
		scanf("%d",&A[x]);
	}

    printf("Enter a key\n");
    scanf("%d",&key);

    printf("\n\nValue of i and j \n");
    
    for(i=0;i<n;i++){
    	
    	for(j=i+1; j<n; j++){
    		
    		
    		if( ((A[i]*A[i] + A[j]*A[j]) == key )){
    		    printf("i = %d  j = %d \n",i,j);
	        }
			
			if((i == n-1)&& (j =n-1)&& ((A[i]*A[i] + A[j]*A[j]) != key)){
				printf("\Not Found");
			}
			}
    		
			
	}
		
	return 0;
}
