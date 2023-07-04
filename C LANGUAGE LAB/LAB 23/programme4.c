#include<stdio.h>

struct book{
 	char name[20];
  char author[20];
 	int cost;
 };   
  void display(struct book *p){
  	printf("\n%s\n%s\n%d\n",p -> name,p -> author, p->cost);
  }
int main()
{
	struct book b = {"Lets us C","ggg",676};
    display(&b);
    return 0;
}

