#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,m;
    printf("Enter the one point x1 and y1\n");
    scanf("%f\n%f",&x1,&y1);
    printf("Enter the one point x2 and y2\n");
    scanf("%f\n%f",&x2,&y2);
    m=(y2-y1)/(x2-x1);
    printf("\nThe slope of the line is %.2f",m);
    
    return 0;
}




