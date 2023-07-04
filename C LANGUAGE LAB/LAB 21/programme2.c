#include <stdio.h>
#include<string.h>
int main()
{
  	char string[100], word[100];
  	int i=0, j=0, flag;
 
  	printf("Enter the String :  \n");
  	gets(string);
  	
	printf("Enter the Word:  \n");
  	gets(word);
	
	
	     	   	
  	while(string[i] != '\0')
	{
		if(string[i] == word[0])
		{
			flag = 1;
			while(word[j] != '\0')
			{
				if(string[i + j] != word[j])
				{
					flag = 0;
					break;
				}
				j++;  
			}	
		}
		if(flag==1)
		{
			break;
		} 
		i++;
	}
	
	if(flag == 0)
  	{
  		printf("\nThe word is not in the string. ", word);
	}
	else
	{
		printf("\nThe word '%s' is at position %d ", word, i );
	}	
	
  	return 0;
}
