#include<stdio.h>

int main()
{
	float p,q,r,s;
	printf("Enter the value of p\n");
	scanf("%f",&p);
	printf("Enter the value of q\n");
	scanf("%f",&q);
	printf("Enter the value of r\n");
	scanf("%f",&r);
	printf("Enter the value of s\n");
	scanf("%f",&s);
	
	if(p*s==r*q)
	printf("The wheatstone is balanced\n");
		
	printf("The wheatstone is not balanced\n");
	s=r*q/p;
	printf("Choose s=%.2f to balance the wheatstone\n",s);	
    
	return 0;
}


