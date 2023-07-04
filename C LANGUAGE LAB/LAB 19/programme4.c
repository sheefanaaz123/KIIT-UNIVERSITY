#include<stdio.h>
int main(){
 int i,j,a[4][5]={{1,2,3,4,5},{6,7,9,1,2},{3,4,5,6,7},{8,9,1,2,3}},b[4]={0,0,0,0};
 int (*pa)[5],*pb;
 pa=a;
 pb=b;
 for(i=0;i<4;i++)
 {
 	for(j=0;j<5;j++)
 	{
 		b[i]=b[i]+a[i][j];
	}
 }
 printf("SUM OF ELEMENTS OF ROW IN 2D ARRAY WITHOUT FUNCTION.\n\n");
 for(i=0;i<4;i++)
 {
  printf("The sum of elements in row %d is %d\n",i,b[i]);	
 }

return 0;
}
