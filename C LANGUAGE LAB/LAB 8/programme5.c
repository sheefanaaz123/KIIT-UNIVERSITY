 #include<stdio.h>

int main()
{
    int score,i=1,count=0;
    
    again:
    	printf("Enter the score of the next player no. %d\n",i);
    	scanf("%d",&score);
    	if(score<0) goto again;
    	if(score>=100)
    	count+=score/100;
    	i++;
    	if(i<=10) goto again;
    	printf("Total number of centuries made is %d",count);
    	
    	
    return 0;
}

