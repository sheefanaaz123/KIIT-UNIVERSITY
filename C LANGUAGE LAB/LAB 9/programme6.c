#include <stdio.h>
int main(){
  int i,factorial=1,NUM;
  printf("Enter the number-\n");
  scanf("%d",&NUM);
  for(i=1;i<=NUM;i++)
      factorial=factorial*i;

  printf("\nThe factorial of number %d is  %d",NUM,factorial);
  return 0;
}
