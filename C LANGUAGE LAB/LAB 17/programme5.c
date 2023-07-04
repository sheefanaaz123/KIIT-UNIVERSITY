#include <stdio.h>

int main()
{   
    int a=10;
    int *pa;
    
    pa = &a;

    printf("variable a:\n");
    printf("a = %d\nAddress of a = %u\n", a, &a);

    printf("pointer pa :\n");
    printf("value at pa= a = %d\nAddress of a= value of ptr = %u\n", *pa, pa);
    return 0;
}
