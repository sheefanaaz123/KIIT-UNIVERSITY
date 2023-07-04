#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int n;
   printf("Enter the size of array ");
   scanf("%d",&n);

   int randArray[n],i;

   for(i=0;i<n;i++)
     randArray[i]=rand();   

   printf("\nElements of the array::");
   for(i=0;i<n;i++)
   {
     printf("%d  ",randArray[i]);
   }

   int min,max;

   min=max=randArray[0];
    for(i=1; i<n; i++)
    {
         if(min>randArray[i])
		        min=randArray[i];   
		     if(max<randArray[i])
		        max=randArray[i];       
    }
   printf("\nMIN: %d",min);
   printf("\nMAX: %d",max);
   return 0;
}
