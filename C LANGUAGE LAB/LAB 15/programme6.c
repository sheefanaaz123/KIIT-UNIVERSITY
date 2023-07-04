#include <stdio.h>  
int main()  
{  
    int a[3][3], b[3][3];  
    int i, j, flag;  
  
      
    printf("Enter the 9  elements : \n");  
    for(i=0; i<3; i++)  
    {  
        for(j=0; j<3; j++)  
        {  
            scanf("%d", &a[i][j]);  
        }  
    }  
    
     printf("\nmatrix (a)  is :\n");
    for(i=0;i<3;i++)
  	{
   		for(j=0;j<3;j++)
    	{
      		printf("%d ",a[i][j]);
    	}
    	printf("\n");
  	}
  
    for(i=0; i<3; i++)  
    {  
        for(j=0; j<3; j++)  
        { 
            b[i][j] = a[j][i];  
        }  
    }  
    
     printf("\nTranspose of matrix(a) = matrix(b) is  :\n");
    for(i=0;i<3;i++)
  	{
   		for(j=0;j<3;j++)
    	{
      		printf("%d ",b[i][j]);
    	}
    	printf("\n");
  	}
    
    flag = 1;  
    for(i=0; i<3 && flag; i++)  
    {  
        for(j=0; j<3; j++)  
        {    
            if(a[i][j] != b[i][j])  
            {  
                flag = 0;  
                break;  
            }  
        }  
    }  
    
    if(flag == 1)  
    {  
        printf("\n Given Matrix is Symmetric. \n");  
  
        for(i=0; i<3; i++)  
        {  
            for(j=0; j<3; j++)  
            {  
                printf("%d ", a[i][j]);  
            }  
  
            printf("\n");  
        }  
    }  
    else  
    {  
        printf("\n Given Matrix is not Symmetric.");  
    }  
  
    return 0;  
}
