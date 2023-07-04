#include<stdio.h>
int factorial(int n)
    {
        if (n==1)
        return (1);
        else
        return(n*factorial(n-1));
    }
int main()
{
   int a,fact;
   printf("\nEnter any number\n");
   scanf("%d",&a);
   fact=factorial(a);
   printf("Factorial value: %d",fact); 
   return 0;
}
   
