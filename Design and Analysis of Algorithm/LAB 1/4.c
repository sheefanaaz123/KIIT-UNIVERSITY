#include <stdio.h>

void SWAP(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void rotate (int *a, int *b, int *c){
    SWAP(a,c);
    SWAP(b,c);

}


int main() {

    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    rotate(&a,&b,&c);
    
    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

