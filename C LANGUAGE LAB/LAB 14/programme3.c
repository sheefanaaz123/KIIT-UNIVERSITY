#include<stdio.h>

int main()
{
    int i,item,m[5],pos=-1;
    printf("Enter the item\n");
    scanf("%d",&item);
    
    for(i=0;i<5;i++)
    {
     printf("Enter data\n");
     scanf("%d",&m[i]);
    }
    for(i=0;i<5;i++)
    {
        if (item==m[i])
        {
            pos=i;
            break;
        }
    }
 
    if(pos==-1)
      printf("Iem is not present");
    else
      printf("Item is present in %d",pos);
    return 0;
}
