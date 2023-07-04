#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int i=0;

    printf("\nEnter the string :: \n");
    scanf("%s",str);
	
	while(str[i]!='\0')
    ++i;
    
    printf("\nThe length of the string is :: %d",i);
	
	return 0;
}
