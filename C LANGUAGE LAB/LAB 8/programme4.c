#include<stdio.h>

int main() {
    int score,i=1,count=0;
    
    again:
    	printf("Enter the score of the next player no. %d\n",i);
    	scanf("%d",&score);
    	if(score<0) goto again;
    	if(score>=100)
    	count++;
    	i++;
    	if(i<=11) goto again;
    	   printf("The total no. of players made centuary is %d",count);
    return 0;
}

