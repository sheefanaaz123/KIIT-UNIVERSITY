#include<stdio.h>

int main(){
	struct a{
	  int i;
	  char c[2];	
	};
	struct b{
		int j;
		char d[2];
	};
	
	union z{
		struct a key;
		struct b data;
	};
	
	union z strange ;
	strange.key.i = 512;
	strange.data.d[0] = 0;
	strange.data.d[1] = 32;

    printf("%d\n",strange.key.i);
	printf("%d\n",strange.data.d[0]);
	printf("%d",strange.data.d[1]);
	return 0;
}
