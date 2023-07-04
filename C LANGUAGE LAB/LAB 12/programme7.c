//percentage n marks
#include<stdio.h>
int fun()
{
 int a,b,c;
 float sum,avg,per;
 printf("Enter marks in 3 subjects:\n");
 scanf("%d %d %d",&a,&b,&c);
 sum=a+b+c;
 avg=sum/3.0;
 per=(sum/300.0)*100;
 printf("AVG=%f\nPERCENTAGE=%f",avg,per);
 return 0;
}

int main()
{
    fun();
    return 0;
}
