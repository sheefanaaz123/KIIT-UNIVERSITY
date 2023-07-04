#include <stdio.h>
int main()
{
    int i=0,n=5,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<8-2*i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
         for(j=0;j<8-2*i;j++)
        printf(" ");
         for(j=0;j<2*i+1;j++)
        printf("$");
        printf("\n");
    }   
    for (i=0;i<n;i++)
    {
        

        for(j=0;j<7-2*i;j++)
        printf("$");
        for(j=0;j<2*i+2;j++)
        printf(" ");
        for(j=0;j<7-2*i;j++)
        printf("$");
        for(j=0;j<2*i+2;j++)
        printf(" ");
        for(j=0;j<7-2*i;j++)
        printf("$");
        for(j=0;j<2*i+2;j++)
        printf(" ");

        printf("\n");
    }
    return 0;
}
