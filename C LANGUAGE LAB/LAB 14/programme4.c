#include<stdio.h>

int search(int item)
{
	int i;
	int array[6];
	for(i=0;i<6;i++)
	{
	printf("Enter the data:\n");
	scanf("%d",&array[i]);		
	}
	
	for(i=0;i<6;i++)
	{
		if(item==array[i])
		{
			printf("It is on the list.");
			break;
		}
		if(item!=array[i])
		{
			printf("It is not on the list\n");
			break;
		}
				
       
    }
    
    return 0;
}
int search_in_between(int item,int left,int right)
{
	int i;
	int array[6];
	for(i=0;i<6;i++)
	{
	printf("Enter the data:\n");
	scanf("%d",&array[i]);		
	}
	      for(i=left;i<=right;i++)
	          {
		          if(item==array[i])
		          {
				  
		            printf("It is on the list between %d and %d",left,right);
		            break;
		        }
		        
	        }
	        
       }

int main()
 {
 	int item;
	printf("Enter the value of item:");
	scanf("%d",&item);
	search(item);
	int left,right;
	printf("Enter the left and right value:");
	scanf("%d %d",&left,&right);
	search_in_between(item,left,right);
	
	
	return 0;
}


