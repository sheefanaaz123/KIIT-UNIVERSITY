#include <stdio.h>
 
void Product(int arr[], int n)
{
    if (n == 0) {
        return;
    }
 
    int l[n], r[n];
 
    l[0] = 1;
    int i,j;
    for ( i = 1; i < n; i++) {
        l[i] = arr[i - 1] * l[i - 1];
    }
 
    r[n - 1] = 1;
    for (j = n - 2; j >= 0; j--) {
        r[j] = arr[j + 1] * r[j + 1];
    }
 
    for ( i = 0; i < n; i++) {
        arr[i] = l[i] * r[i];
    }
}
 
int main(void)
{
    int arr[] = { 10,4,1,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    Product(arr, n);
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    return 0;
}
