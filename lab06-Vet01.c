#include <stdio.h>

void main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5], c;

    printf("SOMA: %d\n\n", soma);

    A[4] = 100;

    for (c = 0; c <= 5; c++) {
        printf("%d\n", A[c]);
    }
}