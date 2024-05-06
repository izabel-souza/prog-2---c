// Escreva uma função em C que receba um vetor de caracteres e faça a ordenação desses elementos usando os métodos da Bolha, QuickSort e Qsort.

#include <stdio.h> <stdlib.h> <string.h>

void ordenacao_bolha(char *frase);
void ordenacao_quicksort(char *frase);

int main (void) {
    char frase[] = "Se pararmos para pensar, vamos pensar parados.";
    ordenacao_bolha(frase);
    ordenacao_quicksort(frase);
    
    return 0;
}

void ordenacao_bolha(char *frase) {
    int n = strlen(frase);
    char temp;
    for(int fim = n - 1; fim > 0; fim--) {
        int troca = 0;
        for(int i = 1; i < n; i++) {
            if(frase[i] > frase[i+1]) {
                temp = frase[i];
                frase[i] = frase[i+1];
                frase[i+1] = temp;
                troca = 1;
            }
        }
        if (troca == 0) {
            return;
        }
    }
}

void ordenacao_quicksort(char *frase) {
    
}