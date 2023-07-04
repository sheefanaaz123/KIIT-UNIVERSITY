#include<stdio.h>

struct book{
 	char name[20];
    char author[20];
 	int cost;
 };   
 
 void displayInd(char *s,char *t,int c){
 	printf("\n%s %s %d\n",s,t,c);
 }
 
 void displayEntire(struct book b){
 	printf("\n%s %s %d\n",b.name,b.author,b.cost);
 }

int main()
{
 struct book p = {"Lets us C","ggg",676};
 displayInd(p.name,p.author,p.cost);
 displayEntire(p);
 
    return 0;
}
