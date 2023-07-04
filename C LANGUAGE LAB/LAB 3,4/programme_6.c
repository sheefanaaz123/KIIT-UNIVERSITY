#include<stdio.h>
int main(){
    int a=20,b=6;
    int p,q;
    p=--a-b;
    printf("p is %d\n",p);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    
    q=--p+p;
    printf("\n\np is %d\n",p);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    printf("q is %d\n",q);
    
return 0;
}