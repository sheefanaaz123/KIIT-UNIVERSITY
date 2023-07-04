#include<stdio.h>
#include<string.h>

int main(){
	union Data{
		int i;
		float f;
		char *str[20];
	};
	union Data d1,d2;
	union Data data;
	
	data.i = 10;
	data.f = 34.72;
	data.str[20] = "C Programme";
	
	printf("%f\n",data.f);
	printf("%c",data.str[3]);
	
	return 0;
}
