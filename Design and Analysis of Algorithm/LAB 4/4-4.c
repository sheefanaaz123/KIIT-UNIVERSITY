// Write a program that uses a divide-and-conquer algorithm/user defined
// function for the exponentiation problem of computing a n where a > 0
// and n is a positive integer. How does this algorithm compare with the
// brute-force algorithm in terms of number of multiplications made by both
// algorithms

#include <stdio.h>
#include <time.h>

long long power(int a, int n) {
  if (n == 0) return 1;
  if (n == 1) return a;

  long long x = power(a, n/2);
  if (n % 2 == 0)
    return x * x;
  else
    return a * x * x;
}

int main() {
  int a = 2;
  int n = 5 ;
  clock_t t;
  double time_taken;

  t = clock();
  long long result = power(a, n);
  t = clock() - t;
  time_taken = ((double)t) / CLOCKS_PER_SEC;

  printf("Divide and conquer algorithm\n");
  printf("Result: %lld\n", result);
  printf("Time taken: %f\n", time_taken);

  t = clock();
  result = 1;
  for (int i = 0; i < n; i++) {
    result *= a;
  }
  t = clock() - t;
  time_taken = ((double)t) / CLOCKS_PER_SEC;

  printf("\nBrute force algorithm\n");
  printf("Result: %lld\n", result);
  printf("Time taken: %f\n", time_taken);

  return 0;
}


//This program calculates a^n using both divide-and-conquer and brute-force algorithms. The number of multiplications made by each algorithm is proportional to the logarithm of n for the divide-and-conquer algorithm and n for the brute-force algorithm. To compare the number of multiplications, you can modify the program to count the number of multiplications made by each algorithm and display the results.