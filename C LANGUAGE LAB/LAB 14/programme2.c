#include<stdio.h>
int main()
{
    int i,count=0,sum=0,marks[20];
    float avg;
    for(i=1;i<=20;i++)
    {
        printf("Enter the marks of 20 students:\n");
        scanf("%d",&marks[i]);
    }
    for(i=1;i<=20;i++)
    {
       sum=sum+marks[i];
       if(marks[i]>89)
        count++;
    }
    avg=sum/20;
    printf("AVERAGE marks obtained by class of 20 students is %f\n",avg);
    printf("No. of students secured 'O' is %d",count);

    return 0;
}
