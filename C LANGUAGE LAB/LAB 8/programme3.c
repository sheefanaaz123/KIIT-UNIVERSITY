#include<stdio.h>

int main()
{
    int score,sum_score=0,i=1;
    float avg_score;
    
    repeat:
    	printf("Enter the score of the next player no. %d\n",i);
    	scanf("%d",&score);
    	sum_score+=score;
    	i++;
    	if(i<=11) goto repeat;
    	
    	avg_score=sum_score/11;
    	printf("The average score is %.2f",avg_score);
    	
    return 0;
}

