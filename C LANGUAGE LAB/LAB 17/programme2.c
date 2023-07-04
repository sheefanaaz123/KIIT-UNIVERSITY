#include<stdio.h>
int main()
{
	int i,j;
    int b[4][3]={5,9,1,7,2,0,3,4,6,8,2,7};
    printf("The matrix is :\n");
    for(i=0;i<4;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
    printf("The address:\n");
    printf("%d\n",&b);
    printf("%d\n",*&b);
    printf("%d\n",*b);
    printf("%d\n",*b+1);
    printf("%d\n",*b+2);  
	printf("\nThe elements of 2D array are :: \n");   
    printf("%d\n",**b);    
    printf("%d\n",*(*b+1));
    printf("%d\n",*(*b+2));
    printf("%d\n",*(*b+3));	
    printf("%d\n",*(*b+4));	
    printf("%d\n",*(*b+5));
    printf("%d\n",*(*b+6));	
	printf("%d\n",*(*b+7));	
	printf("%d\n",*(*b+8));	
	printf("%d\n",*(*b+9));	
	printf("%d\n",*(*b+10));	
	printf("%d\n",*(*b+11));	
	      
    return 0;
}

