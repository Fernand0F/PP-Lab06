#include <stdio.h>

void main() {
    int lista[6], spar = 0, qimpar = 0, c;

    for (c = 0; c <= 5; c++) {
        printf("Digite o valor da posicao %d: ", c);
        scanf("%d", &lista[c]);
    }

    printf("\nNumeros pares:\n");
    for (c = 0; c <= 5; c++) {
        if (!(lista[c] % 2)) {
            printf("- %d\n", lista[c]);
            spar += lista[c];
        }
    }
    printf("Soma dos numeros pares: %d", spar);

    printf("\n\nNumeros impares:\n");
    for (c = 0; c <= 5; c++) {
        if (lista[c] % 2) {
            printf("- %d\n", lista[c]);
            qimpar += 1;
        }
    }
    printf("Quantidade de numeros impares: %d", qimpar);
}