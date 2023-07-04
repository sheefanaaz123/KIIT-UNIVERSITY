#include<stdio.h>
int main(){
	FILE *fp;
	int i,j,a[3][4];
	printf("Enter the elements of the array of \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d ",&a[i][j]);
		}
	}
	printf("ARRAY::\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	fp=fopen("data3.txt","w");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			fprintf(fp,"%d ",a[i][j]);
		}
		printf("\n");
	}
	
  fclose(fp);
	return 0;
}
