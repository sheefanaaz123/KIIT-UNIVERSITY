#include<stdio.h>

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,m1,m2,t;
	printf("Enter the value of x1\n");
	scanf("%d",&x1);
	printf("Enter the value of y1\n");
	scanf("%d",&y1);
	printf("Enter the value of x2\n");
	scanf("%d",&x2);
	printf("Enter the value of y2\n");
	scanf("%d",&y2);
	m1=(y2-y1)/(x2-x1);
	printf("Enter the value of x3\n");
	scanf("%d",&x3);
	printf("Enter the value of y3\n");
	scanf("%d",&y3);
	printf("Enter the value of x4\n");
	scanf("%d",&x4);
	printf("Enter the value of y4\n");
	scanf("%d",&y4);
	m2=(y4-y3)/(x4-x3);
	t=(m1==m2);
	printf("Display the value 1 if they are parallel else 0 = %d",t);
    return 0;
}

