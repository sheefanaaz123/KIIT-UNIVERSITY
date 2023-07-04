#include<stdio.h>
int sod(int n)
{
    return(n/10?n%10+sod(n/10):n);
}
int main()
{
   int a,s;
   printf("Enter any number\n");
   scanf("%d",&a);
   s=sod(a);
   printf("\nSum of digits of %d is %d",a,s);
    return 0;
}
   

