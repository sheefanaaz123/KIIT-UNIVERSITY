#include<stdio.h>
int main(){
	char *p[5];
	char a[]="A";
	char b[]="B";
	char c[]="C";
	char d[]="D";
	char e[]="E";
	p[0]=a;
	p[1]=b;
	p[2]=c;
	p[3]=d;
	p[4]=e;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s\n",p[i]);
	}
	
	return 0;
	
}
