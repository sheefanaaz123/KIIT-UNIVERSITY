#include <stdio.h>
int gcd(int x,int y)
{
	return(y==0?x:x%y);
}
void  main()
{
    int a,b,c;
    printf("Enter the 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    int GCD=gcd(a,gcd(b,c));
    printf("The GCD of %d, %d and %d is %d",a,b,c,GCD);
}
