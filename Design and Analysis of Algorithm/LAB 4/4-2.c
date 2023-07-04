// Write a program to sort a list of n elements using the merge sort method
// and determine the time required to sort the elements. Repeat the
// experiment for different values of n and different nature of data (random
// data, sorted data, reversely sorted data) in the list. n is the user input and
// n integers can be generated randomly. Finally plot a graph of the time
// taken versus n.

#include <stdio.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    int n = rand() % 100;
    int A[n];
    for(int i=0; i<n; i++)
        A[i] = rand() % 100;
    
    printf("\nBefore\n");
    printArray(A, n);
    mergeSort(A, 0, n-1);
    printf("\nAfter\n");
    printArray(A, n);

    return 0;
}

