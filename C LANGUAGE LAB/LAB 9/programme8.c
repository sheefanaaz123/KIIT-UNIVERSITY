//sum of digits of a number.
#include <stdio.h>
int main()
{
   int NUM,sum=0,rem;
   printf("Enter the number\n");
   scanf("%d", &NUM);
   while(NUM){
   rem=NUM%10;
   NUM=NUM/10;
   sum=sum+rem;
}
   printf("%d", sum);
   
   return 0;
}
