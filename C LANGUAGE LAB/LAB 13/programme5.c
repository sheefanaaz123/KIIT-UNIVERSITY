#include<stdio.h>
int power(int a, int b)
{
	if (b==1)
	return (a);
	else
	return(a*power(a,b-1));
}

int main()
{
    int a,b,pow;
    printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	pow=power(a,b);
	printf("the value is %d",pow);
	return 0;
}
