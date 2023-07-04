#include<stdio.h>
int main(){
	FILE *fp;
	int a[10],i,sum=0;
	fp=fopen("data1.txt","r");
	for(i=0;i<10;i++){
		fscanf(fp,"%d",&a[i]);
		sum += a[i];
	}
	printf(" The sum is : %d\n",sum);
	for(i=9;i>=0;i--){
		printf("%d\n",a[i]);
	}
	fclose(fp);
	
	
	return 0;
}
