#include<stdio.h>
int main(){
	FILE *fp;
	int a[4][4],i,j,sum=0;
	fp=fopen("data2.txt","r");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			fscanf(fp,"%d",&a[i][j]);
		}

	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		{
			sum+=a[i][3];
		}
	}
	printf("The sum of the elements of last column is :: %d",sum);
	fclose(fp);
	
	
	return 0;
}
