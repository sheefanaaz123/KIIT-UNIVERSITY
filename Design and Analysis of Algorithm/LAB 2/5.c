#include <stdio.h>

int main(){
  
  int n;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  
  int A[n];
  
  printf("\nEnter the elements\n");
  
  int x;
  for(x=0;x<n;x++){
  	scanf("%d",&A[x]);
  }
   
  int i,j,t;
  
  if((n%2)==0){
  	
  	for(i=0;i<n;i++){
  	for(j=i+1;j<n;j++){
  		t = A[i];
  		A[i] = A[j];
  		A[j] = t;
	  }
    }
  
  }
  
  if(n%2!=0){
  	for(i=0;i<n;i++){
  	for(j=i+1;j<n-1;j++){
  		t = A[i];
  		A[i] = A[j];
  		A[j] = t;
	  }
    }
  	
  }
  
  int y;
  for(y=0;y<n;y++){
  	printf("%d ",A[y]);
  }
  
  return 0;
}

