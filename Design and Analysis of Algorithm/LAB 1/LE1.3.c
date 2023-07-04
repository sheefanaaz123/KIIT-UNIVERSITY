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
	
	int p,q,r;      
	for ( p = 0; p < n; ++p) 
    {
 
      for (q = p + 1; q < n; ++q)
      {
 
        if (A[p] > A[q]) 
           {
 
                r =  A[p];
                A[p] = A[q];
                A[q] = r;
 
           }
 
      }
 
    }
	  
    int key;
    printf("Enter a key\n");
    scanf("%d",&key);
    
    printf("\nValues of i , j and k\n");
    int i,j,k;
    
    
    for(i=0;i<n;i++){
    	
    	for(j=i+1; j<n; j++){
    		
    			for(k=j+1;k<n;k++){
    				
    				if(((A[i] + A[j]+ A[k]) == key) ){
    					printf("i = %d  j = %d k = %d \n",i,j,k);
					}
					
					if( (i==n-1) && (j==n-1) && (k==n-1) && ((A[i] + A[j] + A[k]) != key )){
						printf("Not Found\n");
					}
					
				}
    			
			}
			
		}
	
	return 0;
}
