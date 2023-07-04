#include<stdio.h>
void PrimeFactors( int num)
{
    int i=2;
    if(num==1)
        return;
    while(num%i!=0)
        i++;
    printf("%d ",i);
    PrimeFactors(num/i);
}
int main( )
{
    int num; 
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("\nPRIME FACTORS of %d is :: \n",num);
    PrimeFactors(num);
    return 0;
}
