#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
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

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void replace_value_at_node(int arr[],int node_index, int new_value)
{
    arr[node_index] = new_value;
    int parent = (node_index - 1) / 2;
    while (parent >= 0 && arr[node_index] > arr[parent])
    {
        swap(&arr[node_index],&arr[parent]);
        node_index = parent;
        parent = (node_index - 1) / 2;
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void main()
{
    int n, choice;
    int arr[100];

printf("0. Quit\n");
printf("1. n Random numbers=>Array\n");
printf("2. Display the Array\n");
printf("3. Sort the Array in Ascending Order by using Max-Heap Sort technique\n");
printf("4. Sort the Array in Descending Order by using any algorithm\n");
printf("5. Time Complexity to sort ascending of random data\n");
printf("6. Time Complexity to sort ascending of data already sorted in ascending order\n");
printf("7. Time Complexity to sort ascending of data already sorted in descending order\n");
printf("8. Time Complexity to sort ascending all Cases (Data Ascending, Data in Descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000\n");
printf("9. Extract largest element\n");
printf("10. Replace value at a node with new value\n");
printf("11. Insert a new element\n");
printf("12. Delete an element");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 0:
            exit(0);
            break;
        case 1:
            n = rand()%100;
            for(int i=0; i<n; i++)
                arr[i] = rand()%100;
            break;

        case 2:
            printArray(arr, n);
            break; 
        case 3:
            heapSort(arr, n);
            break;

        case 4:
            bubbleSort(arr,n);
            break;
            
        case 5:
           clock_t start_time = clock();
           heapSort(arr,n);
           clock_t end_time = clock();
           double running_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
           printf("The running time of the algorithm is %f seconds\n", running_time);
           break;

         case 6:
           heapSort(arr,n);
           start_time = clock();
           heapSort(arr,n);
           end_time = clock();
           running_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
           printf("The running time of the algorithm is %f seconds\n", running_time);
           break;

         case 7:
           bubbleSort(arr,n);
           start_time = clock();
           heapSort(arr,n);
           end_time = clock();
           running_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
           printf("The running time of the algorithm is %f seconds\n", running_time);
           break;

        case 9:
          heapSort(arr,n);
          printf("Largest Element :: %d",arr[n-1]);
          break;
         
        case 10:
        heapSort(arr,n);
        int node_index = 0; 
        int new_value = 42;
        replace_value_at_node(arr,node_index, new_value);
        break;

        default:
            printf("Invalid option. Please");
        }
    }while(choice != 0);
        
    }
