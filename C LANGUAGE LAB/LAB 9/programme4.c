#include<stdio.h>

int main()
{
    int num,i,flag=1,t;
    printf("Enter the number\n");
    scanf("%d",&num);
    t=num/2;
    for(i=2;i<=t;i++)
    {
    	if(!(num%i))
    	{
    		flag=0;
    		break;
		}
	}
	if(flag)
	printf("Prime Number");
	else
	printf("Not a Prime Number");
    return 0;
}


