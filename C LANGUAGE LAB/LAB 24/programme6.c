#include<stdio.h>
#include<stdlib.h>
#define col 5

int main()
{
int n,i,j,sum=0;
int (*a)[col]; 
printf("Enter number of rows:\n");
scanf("%d",&n);
a=(int(*)[col])malloc(n*col*sizeof(int));
for(i=0;i<n;i++)
{
for(j=0;j<col;++j)
{
scanf("%d",&a[i][j]);
sum+=a[i][j];
}
}

printf("The array :: \n");
for(i=0;i<n;i++)
{
for(j=0;j<col;++j)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

return 0;
}
