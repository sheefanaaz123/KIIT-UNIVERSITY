#include<stdio.h>

int main()
{
    int p,c,m,e,b,per;
    printf("Enter marks in five subjects\n");
    scanf("%d %d %d %d %d",&p,&c,&m,&b,&e);
    
    per=(int)(p+c+m+b+e+4.9)/5;
    
    if(per>=60)
	printf("First grade");
	else if(per>=50)
	printf("Second grade");
	else if(per>=40)
	printf("Third grade");
	else
	printf("Fail");
    
    return 0;
}

