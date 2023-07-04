 #include <stdio.h>
int power(int base, int a) {
    if (a!=0)
        return (base * power(base, a - 1));
    else
        return 1;
}

int main() {
    int base, a, result;
    printf("Enter the base number:\n");
    scanf("%d", &base);
    printf("Enter power number:\n");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d raised to the power of %d is %d", base, a, result);
    return 0;
}


   
