#include <stdio.h> 
#include <stdlib.h> 
#define comprimento sizeof(valores)/sizeof(int)

void ordenacao_bolha(int *valores);

int main (void) {
    int valores[] = {1,75,2,9,8,3,4,67,3};
    ordenacao_bolha(valores);
    
    return 0;
}

void ordenacao_bolha(int *valores) {
    int temp, fim;
    for(int fim = comprimento - 1; fim > 0; fim--) {
        for(int i = 0; i < comprimento; i++) {
            if (valores[i] > valores[i+1]) {
                temp = valores[i];
                valores[i] = valores[i+1];
                valores[i+1] = temp;
            }
        printf("%d", valores[i]);
        }
    }
}