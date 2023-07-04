#include<stdio.h>

int main()
{
    struct book{
    	char name[20];
    	float price;
    	int page;
	};
	struct book *ptr,b[5];
	ptr = b;
	int i,n;
	printf("Enter number of books:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nEnter book name, price, page:\n");
		scanf("%s %f %d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->page);
		}
	for(i=0;i<n;i++){
		printf("\nBOOK %d \n",i+1);
		printf("%s %f %d",(ptr+i)->name,(ptr+i)->price,(ptr+i)->page);
		}
	
    return 0;
}
