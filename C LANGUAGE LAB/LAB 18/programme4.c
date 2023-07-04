 #include <stdio.h>

int largest(){
  int array[100],*max,n,i;
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter the elements:\n");
 
  for (i= 0 ;i<n;i++ )
  scanf("%d", &array[i]);
 
   max = array;
  *max = *array;
 
  for (i= 1;i< n;i++)
  {
    if (*(array+i) > *max)
    {
       *max = *(array+i);
    }
  }
  printf("\nThe value of maximum element is %d\n",*max);
 return 0;
}
int main()
{
  largest();
  return 0;
}
 
