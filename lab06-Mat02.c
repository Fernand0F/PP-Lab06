#include <stdio.h>

void main() {
    int mat[5][5], l, c;

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            if (l == c) {
                mat[l][c] = 1;
            }
            else {
                mat[l][c] = 0;
            }
        }
    }
    
    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("%d  ", mat[l][c]);
        }
        printf("\n");
    }
}