#include <stdio.h> <stdlib.h> <string.h>
#define X 3
#define Y 4
typedef int Matrix[X][Y];

void criacao_matriz(Matrix matriz);
void impressao(Matrix matriz);

int main (void) {

    Matrix matriz1, matriz2;
    criacao_matriz(matriz1);
    criacao_matriz(matriz2);
    impressao(matriz1);
    impressao(matriz2);

    return 0;
}

void criacao_matriz(Matrix matriz) {
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            printf("Informe [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void impressao(Matrix matriz) {
    for(int i = 0; i < X; i++) {
        printf("\n");
        for(int j = 0; j < Y; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n"); 
}
