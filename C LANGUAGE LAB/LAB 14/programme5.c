#include<stdio.h>
void  main()
{
  int array[150],n,i,temp;
 
    printf("Enter the number of elements in the array:\n") ;
    scanf("%d",&n);
 
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
 
    printf("Original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
 
    
    temp=array[n-1];
    for(i=n-1;i>0;i--)
    {
        array[i]=array[i-1];
    }
    
    array[0]=temp;
 
    printf("\nArray after shifting 1 places : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
}
