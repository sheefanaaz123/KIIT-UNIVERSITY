#include <stdio.h>

void array_swap(int *array , int n)
{ 
    int i=0,temp=0;

    for(i=0 ; i<n/2 ; i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
}

int main()
{
    int array_1[500] = {0};
    
    int i=0 ,n=0;
    
    printf("\nEnter the number of elements for the array : ");
    scanf("%d",&n);
   
    printf("\nEnter the elements of the array : \n");
    for(i=0 ; i<n ; i++)
    {
        printf("The %d element is : ",i);
        scanf("%d",&array_1[i]);
    }
    
    array_swap(array_1 , n);

    printf("\nNew array after swapping first,second and last,last second consecutively.\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\nThe %d element is  %d",i,array_1[i]);
    }
    
    return 0;
}
