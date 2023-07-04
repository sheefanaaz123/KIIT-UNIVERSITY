#include <stdio.h>
  int main() {
        int array[10][10], norm[10] = {0};
        int i, j, max;
       
        printf("Enter :\n");
        for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                        scanf("%d", &array[i][j]);
                }
        }
        for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                        norm[i] = norm[i] + array[j][i];
                }
        }

        max = norm[0];
        for (i = 0; i < 4; i++) {
                if (max < norm[i]) {
                        max = norm[i];
                }
        }
        printf("Max(");
        for (i = 0; i < 4; i++) {
                printf("%d ", norm[i]);
        }
        printf(")\n");

        printf("Norm of the given matrix is %d\n", max);
        return 0;
  }
