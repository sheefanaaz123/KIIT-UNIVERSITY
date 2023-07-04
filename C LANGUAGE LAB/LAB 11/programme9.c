1//1. WAP which takes two integer operands and one operator form the user, performs the
//operation and then prints the result. (Consider the operators +,-,*, /, % etc). Use switch case

#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("Enter the first operand\n");
    scanf("%d",&a);
    printf("Enter the second operand\n");
    scanf("%d",&b);
    printf("Enter the operator\n");
    scanf(" %c",&ch);
    
    switch(ch)
    {
    	case'+':
    		c=a+b;
    		printf("%d",c);
    	break;
    	case'-':
    		c=a-b;
    		printf("%d",c);
    	break;
    	case'*':
    		c=a*b;
    		printf("%d",c);
    	break;
    	case'/':
    		c=a/b;
    		printf("%d",c);
    	break;
    	case('%'):
    		c=a%b;
    		printf("%d",c);
    	break;	
	}
    return 0;
}
