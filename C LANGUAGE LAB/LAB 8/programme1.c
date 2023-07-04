#include<stdio.h>

int main()
{
    char username;
    int password;
    printf("Enter the username\n");
    scanf("%c",&username);
    printf("Enter the password\n");
    scanf("%d",&password);
    
    if(username=='a'&& password==12345)
     	printf("Login Successful\n");
    else
		printf("Login unsuccessful.Try again");
	
    
    return 0;
}

