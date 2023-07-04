#include<stdio.h>

int main()
{
	int a,b,c,t;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	printf("Enter the value of c\n");
	scanf("%d",&c);
	t=((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(b*b));
	printf("Display 1 if they are sides of right angled triangle else 0 = %d",t);
    
    return 0;
}

