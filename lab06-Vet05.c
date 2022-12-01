#include <stdio.h>

void main() {
    int vetor[50], c;

    for (c = 0; c <= 49; c++) {
        vetor[c] = (c + 5 * c) % (c + 1);
    }

    for (c = 0; c <= 49; c++) {
        printf("%d ", vetor[c]);
    }
}