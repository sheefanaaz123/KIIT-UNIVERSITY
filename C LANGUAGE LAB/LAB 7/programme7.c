#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a==0)
    printf("Vehicle moves with constant velocity");
    else if(a>0)
    printf("Vehicle moves with acceleration");
    else if(a<0)
    printf("Vehicle moves with decelerrated velocity");
    return 0;
}


