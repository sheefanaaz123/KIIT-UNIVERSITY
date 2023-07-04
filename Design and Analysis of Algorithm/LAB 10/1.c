#include<stdio.h>
#include<math.h> 
#include<stdlib.h> 

 
int matrix[10][10],completed[10],n,cost=0;
 
void input()
{
  int i,j;
  printf("Enter the number of cities: "); 
  scanf("%d",&n);
  for(i=0;i < n;i++){
     printf("\nEnter elements of Row: %d\n",i+1);
     for( j=0;j < n;j++)
        scanf("%d",&matrix[i][j]);
     completed[i]=0;
  }
 
  printf("\n\nThe Matrix is:");
 
  for( i=0;i < n;i++){
    printf("\n");
    for(j=0;j < n;j++)
      printf("\t%d",matrix[i][j]);
  }
}
 
void mincost(int city){
  int i,ncity;
  completed[city]=1;
  printf("%d--->",city+1);
  ncity=least(city);
  if(ncity==999){
    ncity=0;
    printf("%d",ncity+1);
    cost+=matrix[city][ncity];
    return;
  }
  mincost(ncity);
}
 
int least(int c){
  int i,nc=999;
  int min=999,kmin;
 
for(i=0;i < n;i++){
  if((matrix[c][i]!=0)&&(completed[i]==0))
   if(matrix[c][i]+matrix[i][c] < min){
      min=matrix[i][0]+matrix[c][i];
      kmin=matrix[c][i];
      nc=i;
   }
}
 
if(min!=999)
  cost+=kmin;
 return nc;
}
 
int main()
{
  input();
  printf("\n\nThe Path is:\n");
  mincost(0); 
  printf("\n\nMinimum cost is %d\n ",cost);
 
  return 0;
}

