#include<stdio.h>
 
 int modify(){
 
 int a[10],i,b[10];
	printf("Enter the elements:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("The array :\n");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}

	for (i=0;i<10;i++)
	{
		b[i]=3*a[i];	
	}
	printf("\nNew array after multiplication with 3:\n");
	for (i=0;i<10;i++)
	{
		printf("%d ",b[i]);
		
	}
 
 return 0;
}
 

int main(){
	
modify();
	
	
	
	return 0;
}
