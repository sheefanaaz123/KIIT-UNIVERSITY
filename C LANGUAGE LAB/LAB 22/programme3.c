#include <stdio.h>

int main() {
   
   struct distance{
   int feet;
   float inch;
};
struct distance d1, d2, sum;

   printf("Enter the data of distance 1: \n");
   printf("Enter feet of d1: ");
   scanf("%d", &d1.feet);
   printf("Enter inch of d1: ");
   scanf("%f", &d1.inch);

   printf("\nEnter the data of distance 2:\n");
   printf("Enter feet of d2:");
   scanf("%d", &d2.feet);
   printf("Enter inch of d2:");
   scanf("%f", &d2.inch);

   sum.feet = d1.feet + d2.feet;
   sum.inch = d1.inch + d2.inch;

   printf("\nSum of distances = %d feet %.2f inch", sum.feet, sum.inch);
   return 0;
}
