# include<stdio.h>
 
void knapsack(int n, float w[], float v[], float k) {
   float x[20], tp = 0;
   int i, j, u;
   u = k;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) {
      if (w[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + v[i];
         u = u - w[i];
      }
   }
 
   if (i < n)
      x[i] = u / w[i];
 
   tp = tp + (x[i] * v[i]);
 
   printf("\nThe x[i] is:- ");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);
 
   printf("\nMaximum profit is:- %f", tp);
 
}
 
int main() {
   float w[20], v[20], k;
   int num, i, j;
   float ratio[20], temp;
 
   printf("\nEnter the no. of objects:- ");
   scanf("%d", &num);
 
   printf("\nEnter the wts and value of each object:- ");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &w[i], &v[i]);
   }
 
   printf("\nEnter the capacity:- ");
   scanf("%f", &k);
 
   for (i = 0; i < num; i++) {
      ratio[i] = v[i] / w[i];
   }
 
   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;
 
            temp = w[j];
            w[j] = w[i];
            w[i] = temp;
 
            temp = v[j];
            v[j] = v[i];
            v[i] = temp;
         }
      }
   }
 
   knapsack(num, w, v, k);
   return(0);
}