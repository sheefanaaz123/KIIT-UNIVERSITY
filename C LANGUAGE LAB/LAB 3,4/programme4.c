#include<stdio.h>
#define g 9.8

int main()
{
  int v,u,t,s;
  printf("Enter the value of u\n");
  scanf("%d",&u);
  printf("Enter the value of t\n");
  scanf("%d",&t);
  v=u+g*t;
  printf("v=%d",v);
  s=u*t+0.5*g*t*t;
  printf("\ns=%d\n",s);
 
  return 0;
}




