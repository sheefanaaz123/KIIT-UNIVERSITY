//5. WAP to find out the sum of digits of a number n by suing function.

#include <stdio.h>
void sum_of_digits( int NUM)
{
   int sum=0;
   while(NUM)
   {
   int rem=NUM%10;
   NUM=NUM/10;
   sum=sum+rem;
   }
   printf("%d", sum);
}
int main()
{
   int NUM,sum=0;
   printf("Enter the number\n");
   scanf("%d", &NUM);
   sum_of_digits(NUM);
   return 0;
}

