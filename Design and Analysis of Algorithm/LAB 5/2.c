#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] < arr[smallest])
        smallest = l;

    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
       
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, choice;
    int arr[100];

    printf("Menu:\n");
    printf("1. Enter the number of elements in the array\n");
    printf("2. Enter the elements of the array\n");
    printf("3. Sort the array in descending order using Heap Sort\n");
    printf("4. Display the sorted array\n");
    printf("5. Exit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of elements in the array: ");
            scanf("%d", &n);
            break;

        case 2:
            printf("Enter the elements of the array:\n");
            for (int i = 0; i < n; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;

        case 3:
            heapSort(arr, n);
            break;

        case 4:
            printf("The sorted array in descending order is:\n");
            printArray(arr, n);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid option. Please");
        }
    }while(choice != 5);
        return 0;
    }
