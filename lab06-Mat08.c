#include <stdio.h>

void main() {
    float mat1[2][2], mat2[2][2], con;
    int i, j, cmd;

    printf("MATRIZ 1:\n");
    for (i = 0; i <= 1; i++) {
        for (j = 0; j <= 1; j++) {
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("\n");

    printf("MATRIZ 2:\n");
    for (i = 0; i <= 1; i++) {
        for (j = 0; j <= 1; j++) {
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%f", &mat2[i][j]);
        }
    }

    printf("\nMENU");
    printf("\n[ 0 ] Somar matrizes");
    printf("\n[ 1 ] Subtrair a primeira matriz da segunda");
    printf("\n[ 2 ] Adicionar uma constante as duas matrizes");
    printf("\n[ 3 ] Imprimir as matrizes");
    printf("\nOpcao: ");
    scanf("%d", &cmd);

    switch (cmd) {
        case 0:

            printf("\nMatriz 1 + Matriz 2\n");

            for (i = 0; i <= 1; i++) {
                for (j = 0; j <= 1; j++) {
                    printf("%8.2f ", mat1[i][j] + mat2[i][j]);
                }
                printf("\n");
            }

            break;

        case 1:

            printf("\nMatriz 2 - Matriz 1\n");

            for (i = 0; i <= 1; i++) {
                for (j = 0; j <= 1; j++) {
                    printf("%8.2f ", mat2[i][j] - mat1[i][j]);
                }
                printf("\n");
            }

            break;

        case 2:

            printf("Constante: ");
            scanf("%f", &con);

            printf("\nMatriz 1\n");
            for (i = 0; i <= 1; i++) {
                for (j = 0; j <= 1; j++) {
                    printf("%8.2f ", mat1[i][j] * con);
                }
                printf("\n");
            }

            printf("\nMatriz 2\n");
            for (i = 0; i <= 1; i++) {
                for (j = 0; j <= 1; j++) {
                    printf("%8.2f ", mat2[i][j] * con);
                }
                printf("\n");
            }

            break;

        case 3:

            printf("\nMatriz 1\n");
            for (i = 0; i <= 1; i++) {
                for (j = 0; j <= 1; j++) {
                    printf("%8.2f ", mat1[i][j]);
                }
                printf("\n");
            }

            printf("\nMatriz 2\n");
            for (i = 0; i <= 1; i++) {
                for (j = 0; j <= 1; j++) {
                    printf("%8.2f ", mat2[i][j]);
                }
                printf("\n");
            }

            break;
    }
}