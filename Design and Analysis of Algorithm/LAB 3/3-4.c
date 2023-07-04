// Design a data structure to maintain a set S of n distinct integers that
// supports the following two operations:
// a) INSERT (x, S): insert integer x into S
// b) REMOVE-BOTTOM-HALF(S): remove the smallest ⌈ n/2⌉
// integers from S. Write a program by using UDFs that give the
// worst-case time complexity of the two operations INSERT(x, S) in
// O(1) time and REMOVE-BOTTOM-HALF(S) in O(n) time.




#include<stdio.h>
#include<stdlib.h>

void insert(int arr[],int x,int pos){
    arr[pos]=x;
}

void delete(int arr[],int n){
    int i,j,a;
      for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (arr[i] < arr[j]) 
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
 
        printf("Before\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", arr[i]);
        }
        
        int newArray[n/2];
        for(int x=0; x<n/2; x++){
           newArray[x]=arr[x];
        }
        
        printf("\nArray After deleting smallest n/2 number\n");
        for (int y = 0; y < n/2; y++) 
        {          
            printf("%d\n", newArray[y]);
        }


    }

int main(){
    int n;
    scanf("%d",&n);
    int S[n];
    for(int i=0; i<n; i++)
        insert(S,rand(),i);

    delete(S,n);



    return 0;
}