#include <stdio.h>

void main() {
    int mat[10][10], l, c;

    for (l = 0; l <= 9; l++) {
        for (c = 0; c <= 9; c++) {
            if (l < c) {
                mat[l][c] = (2 * l) + (7 * c) - 2;
            }
            else if (l == c) {
                mat[l][c] = (3 * l * l) - 1;
            }
            else if (l > c) {
                mat[l][c] = (4 * l * l * l) - (5 * c * c) + 1;
            }
        }
    }

    for (l = 0; l <= 9; l++) {
        for (c = 0; c <= 9; c++) {
            printf("%6d", mat[l][c]);
        }
        printf("\n\n");
    }
}