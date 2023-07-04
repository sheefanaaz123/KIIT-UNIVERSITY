#include<stdio.h>
#include<string.h>

int main(){
	char b[100],ch,i=0,count=0;
	printf("Enter the string :\n");
	gets(b);
	printf("Enter the character to find the frequency : \n");
	scanf("%c",&ch);
	
	while(b[i]){
	  if(ch==b[i++])
	   ++count;
	}  
	printf("The frequency of %c is %d",ch,count);
	
	return 0;
}
