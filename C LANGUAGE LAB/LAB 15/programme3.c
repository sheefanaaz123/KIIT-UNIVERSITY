#include<stdio.h>  
int main()  
{  
    int a[20],i,pos=0,neg=0,even=0,odd=0;  
  
    printf("Enter the elements : \n");  
    for(i=0;i<20;i++)  
    {  
        scanf("%d",&a[i]);  
        
        if(a[i] > 0)  
        pos++;  
        if(a[i]<0)
        neg++;  
        if(a[i]%2==0)  
        even++;  
        if(a[i]%2!=0) 
        odd++;  
    }  
  
    printf("\nNo. of positive elements : %d\n", pos);  
    printf("No. of negative elements : %d\n", neg);  
    printf("No. of even elements : %d\n", even);  
    printf("No. of odd elements : %d ", odd);  
   return 0;
}
