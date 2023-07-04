#include<stdio.h>

int main()
{
    int V1,N2,N1;
	float V2;
	printf("Enter the value of V1\n");
	scanf("%d",&V1);
	printf("Enter the value of N2\n");
    scanf("%d",&N2);
	printf("Enter the value of N1\n");  
	scanf("%d",&N1);
	V2=(V1*N2)/N1;
	printf("The value of V2(secondary voltage) is %f",V2);
	
    return 0;
}




