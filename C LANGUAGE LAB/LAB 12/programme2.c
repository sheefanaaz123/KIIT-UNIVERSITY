#include<stdio.h>

int find_max(int n)
{
    int next_num,largest=0,i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the next number\n");
        scanf("%d",&next_num);
        if(next_num>largest)
          largest=next_num;
    }
    return(largest);
}

int count_leader(int n)
{
    int next_num,largest,i,count=0;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the next number\n");
        scanf("%d",&next_num);
        if(next_num>largest)
        {
            largest=next_num;
            count++;
        }
    }
    return(count);
}   
int main()
{
int a;
a=find_max(3);
printf("\nMax is %d",a);
printf("\nMax is %d",find_max(3));

a=count_leader(3);
printf("\nNo. of Leaders are %d",a);
printf("\nNo. of Leaders are %d",count_leader(3));
    
    return 0;
}










