#include<stdio.h>

int main()
{
	int roll_no=0,p,c,m,b,e,i=1;
	float score,max=-1;
	while(i<=8)
	{
	printf("Enter marks in subjects of student %d\n",i);
	scanf("%d %d %d %d %d",&p,&c,&m,&b,&e);
	score=(p+c+m+b+e)/5.0;
	if(score>max)
	{
		max=score;
		roll_no=i;
	}
	i++;
    }
    printf("Topper roll no. is %d and maximum score is %.2f",roll_no,max);
    return 0;
}

