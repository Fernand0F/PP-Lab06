#include <stdio.h>

void main() {
    int mat[5][5], l, c, x, ver = 0, l2, c2;

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("Digite o valor da linha %d e coluna %d: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }

    printf("\nDigite um valor: ");
    scanf("%d", &x);

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            if (x == mat[l][c]) {
                ver = 1;
                l2 = l;
                c2 = c;
            }
        }
    }

    printf("\nLocalizacao de %d na matriz:", x);

    if (ver) {
        printf("\nLinha.: %d", l2);
        printf("\nColuna: %d", c2);
    }
    else {
        printf("\nNAO ENCONTRADO!");
    }
}