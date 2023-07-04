#include <stdio.h>

int main() {
  int a = 10;
  int *pa = &a;

  char b = 'x';
  char *pb = &b;
  
  float c = 1.12;
  float *pc = &c;
  
  double d = 4.66789;
  double *pd = &d;
  
  long e = 100.098;
  long *pe = &e;
  
  printf("Size of Different types of pointer variable :: \n");

  printf("\nsize of (a) = %d", sizeof(a));
  printf("\nsizeof(*pa) = %d", sizeof(*pa));

  printf("\nsizeof(b)   = %d", sizeof(b));
  printf("\nsizeof(*pb) = %d", sizeof(*pb));
  
  printf("\nsizeof(c)   = %d", sizeof(c));
  printf("\nsizeof(*pc) = %d", sizeof(*pc));
  
  printf("\nsizeof(d)   = %d", sizeof(d));
  printf("\nsizeof(*pd) = %d", sizeof(*pd));
  
  printf("\nsizeof(e)   = %d", sizeof(e));
  printf("\nsizeof(*pe) = %d", sizeof(*pe));
  
  return 0;
}


