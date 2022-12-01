#include <stdio.h>

void main() {
    float mat[4][4];
    int l, c, count = 0;

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            printf("Digite o valor da linha %d e coluna %d: ", l, c);
            scanf("%f", &mat[l][c]);
        }
    }

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            if (mat[l][c] > 10.0) {
                count++;
            }
        }
    }

    printf("\nEssa matriz possui %d valores maiores que 10", count);
}