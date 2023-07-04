// Let A be a list of n (not necessarily distinct) integers. Write a program by
// using User Defined Function (UDF)s to test whether any item occurs
// more than ⌈n/2⌉ times in A.
// a) UDF should take O(n^2) time and use no additional space.
// b) UDF should take O(n) time and use O (1) additional space.

#include<stdio.h>

void Method1(int arr[], int n){
printf("BY O(n^2) approach\n");
     for(int i=0;i<n;++i){

        int num = arr[i];
        int count=0;
        for(int j=i+1;j<n;++j)
             if(num==arr[j])
                  count++;
             if(count>=n/2)
                  printf("%d occurred more than n/2 times i.e %d times\n",num,count+1);

    }
}

int maxElement(int arr[],int n){

   int max = 0;
   for(int i=0; i<n; ++i){
      if(max <arr[i])
         max = arr[i];
   }

   return max;
}    

void Method2(int arr[], int n){
int max = maxElement(arr,n);
    int b[max];

    for(int i=0;i<max;++i)
        b[i] =0;

    for(int i=0;i<n;++i){
        int num=arr[i];
        b[num]++;
    }

    printf("By O(n) approach\n");
    for(int i=0;i<max;++i)
       if(b[i] >n/2)
          printf("%d occured more than n/2 times i.e %d times\n",i,b[i]);
}



int  main(){

   int arr[]= {8,3,3,3,4,2,3,6,2,3,3,3};
   int n = 12;

   Method1(arr,n);
   Method2(arr,n);

return 0;
}