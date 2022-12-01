#include <stdio.h>

void main() {
    int lista[5], menor = 0, maior = 0, c;

    for (c = 0; c <= 4; c++) {
        printf("Digite o valor da posicao %d: ", c);
        scanf("%d", &lista[c]);
    }

    for (c = 1; c <= 4; c++) {
        if (lista[menor] > lista[c]) {
            menor = c;
        }
    }

    for (c = 1; c <= 4; c++) {
        if (lista[maior] < lista[c]) {
            maior = c;
        }
    }

    printf("\nPosicao do menor valor: %d", menor);
    printf("\nPosicao do maior valor: %d", maior);
}