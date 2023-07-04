// Write a program to use divide and conquer method to determine the time
// required to find the maximum and minimum element in a list of n
// elements. The data for the list can be generated randomly. Compare this
// time with the time taken by straight forward algorithm or brute force
// algorithm for finding the maximum and minimum element for the same
// list of n elements. Show the comparison by plotting a required graph for
// this problem.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int max(int a, int b) {
  return (a > b) ? a : b;
}

int min(int a, int b) {
  return (a < b) ? a : b;
}

void findMinMax(int arr[], int low, int high, int *min, int *max) {
  int mid;

  if (high - low <= 1) {
    if (arr[low] > arr[high]) {
      *max = arr[low];
      *min = arr[high];
    } else {
      *max = arr[high];
      *min = arr[low];
    }
    return;
  }

  mid = (low + high) / 2;
  findMinMax(arr, low, mid, min, max);
  findMinMax(arr, mid + 1, high, min, max);
}

int main() {
  int arr[N];
  int i, min, max;
  double time_taken;
  clock_t t;

  srand(time(0));
  for (i = 0; i < N; i++) {
    arr[i] = rand() % N;
  }

  t = clock();
  findMinMax(arr, 0, N - 1, &min, &max);
  t = clock() - t;
  time_taken = ((double)t) / CLOCKS_PER_SEC;

  printf("Divide and conquer method\n");
  printf("Minimum element: %d\n", min);
  printf("Maximum element: %d\n", max);
  printf("Time taken: %f\n", time_taken);

  t = clock();
  min = max = arr[0];
  for (i = 1; i < N; i++) {
    if (arr[i] > max) max = arr[i];
    if (arr[i] < min) min = arr[i];
  }
  t = clock() - t;
  time_taken = ((double)t) / CLOCKS_PER_SEC;

  printf("\nBrute force method\n");
  printf("Minimum element: %d\n", min);
  printf("Maximum element: %d\n", max);
  printf("Time taken: %f\n", time_taken);

  return 0;
}

// This program generates a random list of n elements and calculates the time required to find the maximum and minimum elements using both divide and conquer method and brute force method. The time taken by each method is displayed at the end of the program. To compare the times, you can run the program multiple times and take the average of the times, or you can modify the program to plot a graph for different values of n.

        
