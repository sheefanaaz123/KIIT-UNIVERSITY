// Write a program to search an element x in an array of n integers using
// binary search algorithm that uses divide and conquer technique. Find out
// the best case, worst case, and average case time complexities for different
// values of n and plot a graph of the time taken versus n. The n integers can
// be generated randomly, and x can be chosen randomly, or any element of
// the array or middle or last element of the array depending on type of time
// complexity analysis

#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int left, int right, int x) 
{ 
    if (right >= left) { 
        int mid_index = left + (right - left) / 2; 
  
        if (arr[mid_index] == x) 
            return mid_index; 
  
        if (arr[mid_index] > x) 
            return binarySearch(arr, left, mid_index - 1, x); 
  
        else
            return binarySearch(arr, mid_index + 1, right, x); 
    } 
  
    else
        return -1; 
} 
  
int main(void) 
{ 
    int n, x,i,a,j;
    n = rand() % 1000;
    int arr[n];
    

    for(int i=0; i<n; i++)
         arr[i] = rand() % 100; 
    
    for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }

    for(i=0; i<n; i++)
       printf("%d ",arr[i]);
    
    x = rand() % 100;
    
    printf("\nSearch : %d \n",x);
    int ans = binarySearch(arr, 0, n - 1, x); 

    (ans == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", ans);

    return 0; 
} 
