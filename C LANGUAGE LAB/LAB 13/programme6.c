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
	int n;
	for(n=1;n<=8;n++)
{	
	printf(" The factorial of %d is %d",n,factorial(n));
    printf("\n");
}
   return 0;

}
