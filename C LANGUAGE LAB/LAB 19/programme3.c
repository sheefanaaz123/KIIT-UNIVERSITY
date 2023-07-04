#include <stdio.h>

int main()
{
    int array[4][5] = { {1,2,3,4,5}, {6,7,9,1,2},{3,4,5,6,7},{8,9,1,2,3} };
    int *p;
    int i=0,j=0;
    p= &array[0][0]; 
    for (i=0;i<4;i++) 
    {
        for (j=0; j<5;j++)
        {
            printf(" %d ", *(p+(i* 5)+j));
        }
        printf("\n");
        
    }
    return 0;
}
