#include <stdio.h>
 
int main()
{
  int i, NUM, count, sum=0; 
  printf("Prime numbers between 2 to 100 are \n");
  for(NUM=1;NUM<=100;NUM++)
  {
    count=0;
    for(i=2;i<=NUM/2;i++)
    {
  	if(NUM%i==0)
  	{
     	  count++;
  	  break;
  	}
    }
    if(count==0 && NUM!=1)
    {
	printf("%d ",NUM);
	sum=sum+NUM;
    }  
  }
  printf("\n\nThe sum of all prime numbers between 2 to 100 is %d",sum);
 return 0;
}

