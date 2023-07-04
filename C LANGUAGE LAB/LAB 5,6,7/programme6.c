#include<stdio.h>
#include<math.h>
#define g 10

int main()
{
	int t1,t2,t3,t4,t5;
	t1=2*3.14*sqrt(10/g);
	t2=2*3.14*sqrt(20/g);
	t3=2*3.14*sqrt(30/g);
	t4=2*3.14*sqrt(40/g);
	t5=2*3.14*sqrt(50/g);
	printf("  LENGTH\t\tTIME PERIOD\n");
	printf("   10   \t\t    %d     \n",t1);
    printf("   20   \t\t    %d     \n",t2);
    printf("   30   \t\t    %d     \n",t3);
    printf("   40   \t\t    %d     \n",t4);
    printf("   50   \t\t    %d     \n",t5); 
	
	
    
    return 0;
}

