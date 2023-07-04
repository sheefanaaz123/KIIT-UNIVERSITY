#include<stdio.h>
int main()
{
	int i;
    int a[10]={5,9,1,7,2,0,3,4,6,8};
    printf("The matrix is :\n");
    for(i=0;i<10;i++)
    {
    	printf("%d ",a[i]);
	}
	printf("\n\n");
    printf("The address of the array :: %d\n",&a);
    printf("The address of the first element :: %d\n",*&a);
    printf("\nThe elements of the array are::\n");
    printf("%d\n",*a);
    printf("%d\n",*(a+1));
    printf("%d\n",*(a+2));     
    printf("%d\n",*(a+3));    
    printf("%d\n",*(a+4));
    printf("%d\n",*(a+5));
    printf("%d\n",*(a+6));	
    printf("%d\n",*(a+7));	
    printf("%d\n",*(a+8));
    printf("%d\n",*(a+9));	
	   
    return 0;
}

