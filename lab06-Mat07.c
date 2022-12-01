#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int cartela[5][5], l, c, l2, c2, temp, ver;

    srand(time(NULL));

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {

            while (1) {
                temp = rand() % 99;
                
                ver = 1;

                for (l2 = 0; l2 < 4; l2++) {
                    for (c2 = 0; c2 <= 4; c2++) {
                        if (temp == cartela[l2][c2]) {
                            ver = 0;
                        }
                    }
                }

                if (ver) {
                    cartela[l][c] = temp;
                    break;
                }
            }

        }
    }

    printf("\n");

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("%02d ", cartela[l][c]);
        }
        printf("\n");
    }

    printf("\n");
}