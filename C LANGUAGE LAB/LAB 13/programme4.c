#include<stdio.h>
 
int gcd(int n1,int n2)
{
	int t;
    return(n1%n2? t=gcd(n2,n1%n2):n2);
}
int main()
{
    int g,a,b;
    printf("Enter two positive integers\n");
    scanf("%d %d",&a,&b);
    g=(a>b? gcd(a,b):gcd(b,a));
    printf("GCD of %d and %d is %d",a,b,g);
    return 0;
}
