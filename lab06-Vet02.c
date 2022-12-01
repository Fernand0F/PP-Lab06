#include <stdio.h>

void main() {
    int lista[8], x, y, c;

    for (c = 0; c <= 7; c++) {
        printf("Digite o valor da posicao %d: ", c);
        scanf("%d", &lista[c]);
    }

    printf("\nN.    Valor\n");

    for (c = 0; c <= 7; c++) {
        printf("%d  -  %d\n", c, lista[c]);
    }

    printf("Digite um valor correspondente a uma posicao da lista: ");
    scanf("%d", &x);

    printf("Digite outro valor correspondente a uma posicao da lista: ");
    scanf("%d", &y);

    printf("\nA soma de %d e %d eh %d", lista[x], lista[y], lista[x] + lista[y]);
}
