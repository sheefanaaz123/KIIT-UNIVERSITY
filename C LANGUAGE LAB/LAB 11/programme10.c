//2. WAP to input any two integers, and provide a menu to the user to select any of the options as
//add, subtract, multiply, divide and display the result accordingly.

#include<stdio.h>

int main()
{
 int a,b,n;
 printf("Enter the first integer : \n");
 scanf("%d",&a);
 printf("Enter the second integer : \n");
 scanf("%d",&b);
 printf("Select any of the options.\n");
 printf("Press 1 for add\n");
 printf("Press 2 for subtract\n");
 printf("Press 3 for multiply\n");
 printf("Press 4 for divide\n");
 
 printf("\nEnter your choice:\n");
 scanf("%d",&n);
 
 printf("\n\nRESULT IS\n");
 
 
 switch(n)
 {
 	case 1:
 		printf("%d",a+b);
 		break;
 	case 2:
 		printf("%d",a-b);
 		break;
	case 3:
 		printf("%d",a*b);	 
		 break;	
 	case 4:
 		printf("%d",a/b);	
 		break;
 		
 }
    
    return 0;
}
