#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0, n;
	float *data;
	printf("Enter total number of elements(1 to 100):\n");
	scanf("%d",&n);
	data = (float*)calloc(n,sizeof(float));
	printf("\nEnter numbers");
	for(i=0;i<n;++i){
		
		scanf("%f",data+i);
	}
	for(i=0;i<n;++i){
		if(*(data)<*(data+i)){
		*(data)=*(data+i);
	}
}
	
	printf("Largest element :: %f",*data);
	free(data);
	
	return 0;
}
