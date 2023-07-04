#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void segregateEvenOdd(int arr[], int size)
{ 
	
	int left = 0, right = size-1;
	while (left < right)
	{
		
		while (arr[left]%2 == 0 && left < right)
			left++;

		
		while (arr[right]%2 == 1 && left < right)
			right--;

		if (left < right)
		{
			
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}


int main()
{
	int arr[] = {12,16,13,14,7,8};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	segregateEvenOdd(arr, arr_size);

	printf("Array after segregation ");
	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);

	return 0;
}
 