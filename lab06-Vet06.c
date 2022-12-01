#include <stdio.h>

int ePrimo(int x) {
    int c;

    if (x == 1) {
        return 0;
    }

    for (c = 2; c <= x/2; c++) {
        if (!(x % c)) {
            return 0;
        }
    }
    return 1;
}

void main() {
    int lista[10], c;

    for (c = 0; c <= 9; c++) {
        printf("Digite o valor da posicao %d: ", c); 
        scanf("%d", &lista[c]);
    }

    printf("\nOs numeros primos digitados foram:");
    printf("\nN.  Valor");

    for (c = 0; c <= 9; c++) {
        if (ePrimo(lista[c])) {
            printf("\n%d - %d", c, lista[c]);
        }
    }
}