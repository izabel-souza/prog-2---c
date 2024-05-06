#include <stdio.h> <stdlib.h> <string.h>
#define N 2 
#define M 3

void criacao_matriz(int vetor[N][M]);
int somatorio_linhas(int vetor[N][M]);

int main (void) {
    
    int vetor[N][M];
    criacao_matriz(vetor[N][M]);
    int resultado;
    resultado = somatorio_linhas(vetor[N][M]);

    printf("%d", resultado);
    
    return 0;
}

void criacao_matriz(int vetor[N][M]){
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("Informe o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &vetor[i][j]);
        }
    }
}

int somatorio_linhas(int vetor[N][M]) {
    
    int somatorio = 0, temp;
    for(int i = 0; i < M; i++) {
        somatorio += vetor[0][i];
    }
    temp = somatorio;
    somatorio = 0;
    for(int i = 0; i < M; i++) {
        somatorio = vetor[1][i];
    }

    if(temp == somatorio) {
        return 1;
    }
    else {
        return 0;
    }
}