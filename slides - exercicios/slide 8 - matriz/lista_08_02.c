#include <stdio.h> <stdlib.h> <string.h>
#define X 3
#define Y 4
typedef int Matrix[X][Y];

void criacao_matriz(Matrix matriz);
void impressao(Matrix matriz);
void matriz_somatorio(Matrix matriz1, Matrix matriz2);

int main (void) {

    Matrix matriz1, matriz2;
    criacao_matriz(matriz1);
    criacao_matriz(matriz2);
    impressao(matriz1);
    impressao(matriz2);
    matriz_somatorio(matriz1, matriz2);

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

void matriz_somatorio(Matrix matriz1, Matrix matriz2) {
    Matrix matriz_somatorio;
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            matriz_somatorio[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    impressao(matriz_somatorio);
}