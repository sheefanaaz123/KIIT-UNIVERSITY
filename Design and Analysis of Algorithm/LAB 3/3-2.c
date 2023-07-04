// Write a program by using a user-defined function for computing ⌊√n⌋ for
// any positive integer n. Besides assignment and comparison, your
// algorithm may only use the four basic arithmetical operations.

#include<stdio.h>

void calculate_sqrt(int number){

    int sqrt = number/2;
    int t;
    while(sqrt!=t){
        t=sqrt;
        sqrt=(number/t + t) /2;
    }
    printf("Answer is : %d\n%d",sqrt,count);
    }


    void main(){
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\nSquare root of %d :: \n",n);
        calculate_sqrt(n);
    }