#include <stdio.h>

void main() {
    int lista[10], temp, ver, c, d;

    for (c = 0; c <= 9; c++) {
        while (1) {
            printf("Digite o valor da posicao %d: ", c);
            scanf("%d", &temp);

            ver = 0;

            for (d = 0; d < c; d++) {
                if (temp == lista[d]) {
                    ver = 1;
                }
            }

            if (ver == 0) {
                lista[c] = temp;
                break;
            }
        }
    }

    printf("\nVetor:\n");
    for (c = 0; c <= 9; c++) {
        printf("%d  ", lista[c]);
    }
}