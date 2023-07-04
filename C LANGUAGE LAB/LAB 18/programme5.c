#include<stdio.h>
 void maximum()
 {
 	int array[100],i;
 	int *max;
    printf("Enter the element of the array::\n");
    for(i=0;i<5;i++)
    scanf("%d",&array[i]);
    
   max = array;
  *max = *array;
 
  for (i= 0;i<5;i++)
  {
    if (*(array+i) > *max)
    {
       *max = *(array+i);
    }
  }
  printf("\nLargest is %d",*max);
 }
 
 void minimum()
 {
 	int array[100],i;
 	int *min;
    printf("\nEnter the element of the array::\n");
    for(i=0;i<5;i++)
    scanf("%d",&array[i]);
    
   min = array;
  *min = *array;
 
  for (i= 1;i<5;i++)
  {
    if (*(array+i) < *min)
    {
       *min= *(array+i);
    }
  }
  printf("\nMinimum is %d",*min);
 }
 
  void odd()
 {
 	int array[100],i,count=0;
 	int *p;
    printf("\nEnter the element of the array::\n");
    for(i=0;i<5;i++)
    scanf("%d",&array[i]);
    p=array;
  for (i= 1;i<5;i++)
  {
    if(array[i]%2!=0)
    {
    	count++;
	}
  }
  printf("\nno. of odd no. is %d",count);
 }
int main()
{
    maximum();
    minimum();
    odd();
    return 0;
}



