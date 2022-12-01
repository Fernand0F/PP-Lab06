#include <stdio.h>

void main() {
    int mat[4][4], l, c;

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            printf("Digite o valor da linha %d e coluna %d (Digite um valor entre 1 e 20): ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }

    printf("\nMATRIZ ORIGINAL\n");
    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            printf("%4d", mat[l][c]);
        }
        printf("\n");
    }

    printf("\nMATRIZ MODIFICDA\n");
    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            if (c > l) {
                mat[l][c] = 0;
            }

            printf("%4d", mat[l][c]);
        }
        printf("\n");
    }
}