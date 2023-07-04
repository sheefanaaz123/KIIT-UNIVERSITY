// Let A be an array of n integers a 0, a1,... ,an-1 (negative integers are
// allowed), denoted, by A [i... j], the sub-array a i
// , ai+1,... ,aj for i≤j. Also let
// Si-j denote the sum ai + ai+1 +· · · + aj
// . Write a program by using a UDF
// that must run in O(n^2) time to find out the maximum value of Si-j for all
// the pairs i, j with 0 ≤ i ≤ j ≤ n-1. Call this maximum value S. Also obtains
// the maximum of these computed sums. Let j < i in the notation A [i... j] is
// also allowed. In this case, A[i... j] denotes the empty sub-array (that is, a
// sub-array that ends before it starts) with sum Si-j = 0. Indeed, if all the
// elements of A are negative, then one returns 0 as the maximum sub-array
// sum.
// For example, for the array A []={1, 3, 7, -2, -1, -5, -1, -2, -4, 6, 2}. This
// maximum sum is S = S0-2 = 1+3+7=11.

#include<stdio.h>
#include<stdlib.h>

int maxSum(int arr[],int n){
    int i,j,max=0;
    
    if(i<j){
        for( i=0;i<n;++i){
        int sum =0;
        for(j=i;j<n;++j){
            sum+=arr[j];
            if(sum>=max)
                max=sum;
            else
                break;
            }
        }

    }
    else{
        max = 0;
    }
      
        
    
    
    return max;
}

int main(){
    int A[]= {1,3,7, -2, -1, -5, -1, -2, -4,6,2};
    int n=sizeof(A) /sizeof(int); 
   
    int max=maxSum(A,n);

    for(int i=0;i<n;i++)
    printf("%d ",A[i]);

    printf("\nMaximum sum is %d\n",max);

    return 0;
}