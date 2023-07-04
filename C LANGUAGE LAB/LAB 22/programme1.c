 #include<stdio.h>
#include<string.h>

int main()
{
    struct book{
    	
    	char name[20];
    	float price;
    	int page;
	};
	struct book b1,b2;
	printf("Enter name , price and no. of pages of 2 books :\n");
	scanf("%s %f %d",b1.name,&b1.price,&b1.page);
	scanf("%s %f %d",b2.name,&b2.price,&b2.page);
	printf("DETAILS OF BOOK 1:\n");
	printf("Name:%s\nPrice:%f\nPage:%d\n",b1.name,b1.price,b1.page);
    printf("DETAILS OF BOOK 2:\n");
	printf("Name:%s\nPrice:%f\nPage:%d\n",b2.name,b2.price,b2.page);
    
    return 0;
}

