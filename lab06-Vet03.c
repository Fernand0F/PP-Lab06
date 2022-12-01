#include <stdio.h>

void main() {
    int lista[6], c;

    for (c = 0; c <= 5; c++) {
        printf("Digite o valor da posicao %d: ", c);
        scanf("%d", &lista[c]);
    }

    printf("\n");

    for (c = 5; c >= 0; c--) {
        printf("%d  ", lista[c]);
    }
}