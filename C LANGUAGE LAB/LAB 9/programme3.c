#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 10
int main()
{
	int l;
	float t;
	printf("LENGTH\t\tTIME PERIOD");
	for(l=10;l<=50;l=l+10)
	{	
	t=2.0*pi*sqrt(l/g);
	printf("\n%d\t\t%.2f",l,t);
    }
    return 0;
}


