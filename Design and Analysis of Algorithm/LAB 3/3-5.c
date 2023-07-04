//Consider an n × n matrix A = (aij), each of whose elements aij is a 
// non negative real number and suppose that each row and column of A sums to an integer value.
//  We wish to replace each element aij with either⌊aij⌋or⌈aij⌉without disturbing the row and column
//   sums.Write a program by defining a user defined function that is used to produce the rounded 
//   matrixas described in the above example. Find out the time complexity of your algorithm/function.

#include<stdio.h>
#include<math.h>

float A[5][5];
int count=0,n;
float sum;

void display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.2f ",A[i][j]);
        }
        printf("\n");
    }
}
                                    
void UDF(){
      for(int w=0;w<n;w++){
        count++;
            for(int q=0;q<n;q++){
                count++;
                    A[w][q]=round(A[w][q]);
                }
        }
}

int main(){
    int i,j;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }

    for (i = 0; i < n; ++i) 
    {
            for (j = 0; j < n; ++j) 
            {
                sum = sum + A[i][j] ;
            }
 
            printf("Sum of the %d row is = %.2f\n", i, sum);
            sum = 0;
 
    }
        
    for (j = 0; j < n; ++j) 
    {
            for (i = 0; i < n; ++i)
            {
                sum = sum + A[i][j];
            }
 
            printf("Sum of the %d column is = %.2f\n", j, sum);
            sum = 0;
    }

    display();
    
    UDF();
    printf("\nAfter Round off\n");
    display();
    printf("\nFrequency Count is  %d",count);

    return 0;
}