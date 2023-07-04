#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,count=1;
	int i,index=0,max=-1;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr=(int*) malloc(n * sizeof(n));
    
    printf("Enter the elements of the array: \n");
    
    for(i=0;i<n;i++){
	     scanf("%d", arr+i);
	 }    
    
    if(*(arr+i)==1 && *(arr+(i+1))==1){
            count++;
        }
	else if(count>max){
            max=count;
            index=i-count+1;
            count=1;
        }
    printf("The position from where the largest number of consecutive 1s is present is %d", index);
    free(arr);
    return 0;
}
