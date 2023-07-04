#include <stdio.h>
 
void Product(int arr[], int n)
{
    if (n == 0) {
        return 0;
    }
 
    int left[n], right[n];
 
    left[0] = 1;
    
    int i,j;
    
    for ( i = 1; i < n; i++) {
        left[i] = arr[i - 1] * left[i - 1];
    }
 
    right[n - 1] = 1;
    
    for (j = n - 2; j >= 0; j--) {
        right[j] = arr[j + 1] * right[j + 1];
    }
 
    for ( i = 0; i < n; i++) {
        arr[i] = left[i] * right[i];
    }
}
 
int main(void)
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	
    int arr[n];
    
    printf("\nEnter the number\n");
    int x;
    for(x=0;x<n;x++){
    	scanf("%d",&arr [x]);
	}
 
    Product(arr, n);
    
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}
