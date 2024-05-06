#include <stdio.h> <stdlib.h> <string.h>
#define X 8
#define Y 8

typedef int Tabuleiro[X][Y];
void contagem_peoes_bispos_ausencia(Tabuleiro matriz);
void quant_pecas(Tabuleiro matriz);

int main (void) {   
    
    Tabuleiro matriz = {{1, 3, 0, 5, 4, 0, 2, 1}, {1, 0, 1, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 1, 0, 6, 0}, {1, 0, 0, 1, 1, 0, 0, 1}, {0, 1, 0, 4, 0, 0, 1, 0}, {0, 0, 3, 1, 0, 0, 1, 1}, {1, 0, 6, 6, 0, 0, 1, 0}, {1, 0, 5, 0, 1, 1, 0, 6}};

    contagem_peoes_bispos_ausencia(matriz);
    quant_pecas(matriz);

    return 0;
}

void contagem_peoes_bispos_ausencia(Tabuleiro matriz) {
    int bispos_peoes = 0, ausencia = 0;
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            switch(matriz[i][j]) {
                case 0: ausencia++; break;
                case 1: bispos_peoes++; break;
                case 4: bispos_peoes++; break;
            }
        }
    }
    printf("Ausencia = %d\nPeoes e Bispos = %d\n", ausencia, bispos_peoes);
}

void quant_pecas(Tabuleiro matriz) {
    int peoes = 0, cavalos = 0, torres = 0, bispos = 0, reis = 0, rainhas = 0, ausencia = 0;
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            switch(matriz[i][j]) {
                case 0: ausencia++;break;
                case 1: peoes++; break;
                case 2: cavalos++; break;
                case 3: torres++; break;
                case 4: bispos++; break;
                case 5: reis++; break; 
                case 6: rainhas++; break;
            }
        }
    }
    printf("Ausencia = %d\nPeos = %d\nCavalos = %d\nTorres = %d\nBispos = %d\nReis = %d\nRainhas = %d", ausencia, peoes, cavalos, torres, bispos, reis, rainhas);
}