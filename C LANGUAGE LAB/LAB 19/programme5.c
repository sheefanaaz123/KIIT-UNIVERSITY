#include<stdio.h>
#include <stdlib.h>
void fun(int* ptr, int nrow, int mcol){
    int b[4]={0};
    int *pb=b;
    for(int i=0;i<nrow;i++){
        for(int j=0;j<mcol;j++){
            b[i]=b[i]+ptr[i*mcol+j];
        }
    }
    printf("SUM OF ELEMENTS OF ROW IN 2D ARRAY USING FUNCTION.\n\n");
    for(int i=0;i<nrow;i++){
        printf("The sum of elements in the row %d is :%d \n",i, b[i]);
    }
}
int main()
{
    int nrow=0;
    printf("Enter the number of rows: ");
    scanf("%d", &nrow);

    int mcol=0;
    printf("Enter the number of columns: ");
    scanf("%d", &mcol);

    int *ptr=malloc((nrow * mcol) * sizeof(int));
    for(int i=0;i<nrow;i++){
        for(int j=0;j<mcol;j++){
            scanf("%d", &ptr[(i*mcol)+j]);
        }
    }

    fun(ptr, nrow, mcol);

    return 0;
}
