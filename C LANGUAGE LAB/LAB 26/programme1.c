#include<stdio.h>
int main(){
	unsigned int a=60;
	unsigned int b=13;
	int c=0;
	
	c=a&b;
	printf("LINE 1 - value of c is %d\n",c);
	
	c=a|b;
	printf("LINE 2 - value of c is %d\n",c);
	
	c=a^b;
	printf("LINE 3 - value of c is %d\n",c);
	
	c=~a;
	printf("LINE 4 - value of c is %d\n",c);
	
	c=a<<2;
	printf("LINE 5 - value of c is %d\n",c);
	
	c=a>>2;
	printf("LINE 6 - value of c is %d\n",c);
	
	
	
	
	return 0;
}
