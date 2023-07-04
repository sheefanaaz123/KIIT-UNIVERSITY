#include<stdio.h>
#include<string.h>

int main(){
	
struct library{
 int acc_no;
 char book_title[20],author[20];
 int cost;
};
struct library b[100];
int true =1;
int count,choice;
 while(true)
 {
  printf("\n 1:Add Book Information\n");
  printf("\n 2:Display Book Information\n");
  printf("\n 3:Book Author\n");
  printf("\n 4:Count Book\n");
  printf("\n 5:Want to Exit\n");
  
  printf("\n Enter the choice \n");
  scanf("%d",&choice);
  void add_book()
{

 printf("\n Enter the detail of book \n");
 printf("\n Enter accession number of book");
 scanf("%d",&b[count].acc_no);
 fflush(stdin);
 printf("\n Enter the book title=");
 gets(b[count].book_title);
 fflush(stdin);
 printf("\n Enter the name of author=");
 gets(b[count].author);
 fflush(stdin);
 printf("\n Enter the cost of book=");
 scanf("%d",&b[count].cost);
 count++;
}

void disp_book()
{
 int i;
 printf("\nDetail of %d books in library",count);
 for(i=0;i<count;i++)
 {
  printf("\n %d\n%s\n%s\n%d",b[i].acc_no,b[i].book_title,b[i].author,b[i].cost);
 }
}

void book_auth()
{
 int i,flag=0;
 char name[20];
 printf("\nEnter the name of author=");
 gets(name);
 for(i=0;i<count;i++)
 {
  if(strcmp(name,b[i].author)==0)
  {
   flag++;
   printf("\n%d\n%s\n%s\n%d",b[i].acc_no,b[i].book_title,b[i].author,b[i].cost);
  }
 }
 if(flag==0)
  printf("\n Book is not issued \n");
}

void count_book()
{
 printf("\nTotal no. of book in library is %d",count);
}

switch(choice)
  {
   case 1:
    add_book();
    getch();
    break;
   case 2:
    disp_book();
    getch();
    break;
   case 3:
    book_auth();
    getch();
    break;
   case 4:
    count_book();
    getch();
    break;
   case 5:
    exit(0);
  }
 }
return 0; 
}


