#include<stdio.h>

int main()
{
    int f,k,f1,f2,f3,f4,f5,k1,k2,k3,k4,k5;
    f1 = (20 * 9 / 5) + 32;
    f2 = (40 * 9 / 5) + 32;
    f3 = (60 * 9 / 5) + 32;
    f4 = (80 * 9 / 5) + 32;
    f5 = (100 * 9 / 5) + 32;
    k1=20+273;
    k2=40+273;
    k3=60+273;
    k4=80+273;
    k5=100+273;  
    printf("  CELSIUS\t\tFAHREINHEIT\t\tKELVIN  \n");
	printf("   20    \t\t    %d     \t\t  %d    \n",f1,k1);
    printf("   40    \t\t    %d     \t\t  %d    \n",f2,k2);
    printf("   60    \t\t    %d     \t\t  %d    \n",f3,k3);
    printf("   80    \t\t    %d     \t\t  %d    \n",f4,k4);
    printf("   100   \t\t    %d     \t\t  %d    \n",f5,k5); 
	
    
    return 0;
}

