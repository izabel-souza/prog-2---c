#include <stdio.h> <stdlib.h> <string.h>
#define X 4
#define Y 4

int main (void) {

    int matriz_original[X][Y], matriz_transposta[X][Y];
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            printf("Informe [%d][%d]: ", i, j);
            scanf("%d", &matriz_original[i][j]);
        }
    }
    
    for(int j = 0; j < X; j++) {
        for(int i = 0; i < Y; i++) {
            matriz_transposta[j][i] = matriz_original[i][j];
        }
    }

    for(int i = 0; i < X; i++) {
        printf("\n");
        for(int j = 0; j < Y; j++) {
            printf("%d ", matriz_original[i][j]);
        }
    }
    printf("\n");

    for(int i = 0; i < X; i++) {
        printf("\n");
        for(int j = 0; j < Y; j++) {
            printf("%d ", matriz_transposta[i][j]);
        }
    }

    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            if(matriz_original[i][j] == matriz_transposta[j][i]) {
                printf("É simétrica");
            }
            else {
                printf("Não é simétrica");
            }
        }
    }

    
    return 0;
}
