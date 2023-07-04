#include <stdio.h>
void SwapByRef(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\nx=%d\ny=%d",*x,*y);
}
int main(){
	int a,b;
	printf("Enter x and y:\n");
	scanf("%d %d",&a,&b);
	SwapByRef(&a,&b);
	
	return 0;
}
