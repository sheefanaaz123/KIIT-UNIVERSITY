 #include<stdio.h>

int main()
{
    long int n,rev_n=0,org_n;
	printf("\nEnter the number:\n");
	scanf("%ld",&n);   
	org_n=n;
	
	do{
		rev_n=rev_n*10+n%10;
	}
	while(n=n/10);
	{
	printf("The reverse number is %ld",rev_n);	
	}
	if(org_n==rev_n)
	printf("\nThis is a palindrome number.");
	else
	printf("\nThis is not a palindrome number.");
	
    return 0;
}




