#include<stdio.h>
#include<string.h>

int main()
{
    struct book{
    	char name[20];
    	float price;
    	int page;
	};
	struct book b[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter the NAME, PRICE AND PAGES\n");
		scanf("%s %f %d",b[i].name,&b[i].price,&b[i].page);
	}
	for(i=0;i<3;i++){
		printf("Book number %d:\n",i+1);
		printf("NAME:%s\tPRICE:%f\tPAGES:%d\n",b[i].name,b[i].price,b[i].page);
	}
    return 0;
}

