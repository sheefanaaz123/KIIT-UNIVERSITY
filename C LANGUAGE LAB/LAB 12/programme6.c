#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[5];
    printf("Enter 5 elements:\n ");
    for (i = 0; i < 5; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.4f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 5; ++i) {
        sum += data[i];
    }
    mean = sum / 5;
    for (i = 0; i < 5; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 10);
}

