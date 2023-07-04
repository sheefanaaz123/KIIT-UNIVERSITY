#include <stdio.h>

int main() {
	int sum=0,n,count=0,i;
	for(i=0;i<10;i++){
	    printf("Enter the next number:\n");
	    scanf("%d",&n);
	    count=count+n%2;
	    sum=sum+(n%2)*n;
	}
	printf("number of odd numbers %d and sum is %d",count,sum);
	return 0;
}
