#include <stdio.h>

void main() {
    float mat[4][4];
    int l, c, ml = 0, mc = 0;

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            printf("Digite o valor da linha %d e coluna %d: ", l, c);
            scanf("%f", &mat[l][c]);
        }
    }

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            if (mat[ml][mc] < mat[l][c]) {
                ml = l;
                mc = c;
            }

            printf("%8.2f", mat[l][c]);
        }
        printf("\n");
    }

    printf("\nLocalizacao do maior valor:");
    printf("\nLinha.: %d", ml);
    printf("\nColuna: %d", mc);
}