#include<stdio.h>
int main(){
	FILE *fp;
	int i,a[10]={1,2,3,4,5,6,7,8,9,10};
	fp=fopen("data6.txt","w");
	for(i=0;i<10;i++){
		fprintf(fp,"%d",a[i]);
	}
	fclose(fp);
	
	return 0;
}
