#include<stdio.h>

int main()
{
    int age,marks;
    printf("Enter marks of the person\n");
	scanf("%d",&marks);
	printf("Enter the age of the person\n");
	scanf("%d",&age);
	marks=marks+40;
	if(age<50)
	marks=marks+20;
	printf("The marks is %d\n",marks);
	
	
	
	  
    return 0;
}



