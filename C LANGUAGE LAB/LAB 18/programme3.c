#include <stdio.h>
int large_sum(int*a,int *b,int n)
{
    int i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        s1+=a[i];
        s2+=b[i];
    }
    if(s1==s2)
     return 0;
    else if(s1>s2)
     return 1;
    else
     return 2;
}
int main() {
   int x[20],y[15],g,i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the elements of first array:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&x[i]);
	}
	printf("Enter the element of second array:\n");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&y[i]);
	}
    g=large_sum(x+5,y+4,10);
    
    if(!g)
      printf("Both sums are equal.");
    else if(g==1)
      printf("x is greater then y");
    else
     printf("y is greater then x");
     
	return 0;
}
