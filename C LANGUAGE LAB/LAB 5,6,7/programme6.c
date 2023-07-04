#include<stdio.h>

int main()
{
	int x1,y1,x2,y2,x3,y3;
	float m1,m2,m3;
	printf("ENTER the coordinates of first point (x1,y1)");
	scanf("%d %d",&x1,&y1);
	printf("ENTER the coordinates of second point (x2,y2)");
	scanf("%d %d",&x2,&y2);
	printf("ENTER the coordinates of third point (x3,y3)");
	scanf("%d %d",&x3,&y3);
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y2)/(x3-x2);
	m3=(y1-y3)/(x1-x3);
	if (m1!=m2 && m2!=m3 && m3!=m1)
	printf("They form triangle");
	else
	printf("They do not form triangle");
	
	
    
    return 0;
}


