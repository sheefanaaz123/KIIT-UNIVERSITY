 #include<stdio.h>
int main()
{
	int i=0,j=0,sum=0;
    int a[10]={1,2,3,4,5};
    printf("The array is:\n");
    for(j=0;j<5;j++)
    {
    	printf("%d ",a[j]);
	}
    printf("\nThe sum of the the elements is:\n");
    for(i=0;i<5;i++)
    {
    	sum=sum+*(a+i);
	}
	printf("%d",sum);
	      
    return 0;
}
