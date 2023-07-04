
#include<stdio.h>
#define g 9.8

int main()
{
    int u,t;
	float v,s;
	t=1;
	printf("Enter the initial velocity u\n");
	scanf("%d",&u);
	t=t++;
	v=u+g*t;
	s=u*t+0.5*g*t*t;
	printf("The value of v and s for time %d is %f and %f\n",t,v,s);
	t=++t;
	v=u+g*t;
	s=u*t+0.5*g*t*t;
	printf("The value of v and s for time %d is %f and %f\n",t,v,s);
	t=++t;
	v=u+g*t;
	s=u*t+0.5*g*t*t;
	printf("The value of v and s for time %d is %f and %f\n",t,v,s);
	t=++t;
	v=u+g*t;
	s=u*t+0.5*g*t*t;
	printf("The value of v and s for time %d is %f and %f\n",t,v,s);
	t=++t;
	 v=u+g*t;
	s=u*t+0.5*g*t*t;
	printf("The value of v and s for time %d is %f and %f\n",t,v,s);
	  
    return 0;
}



