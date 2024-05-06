#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializa(int *vet);
void atribui_valores(int *vet);
void imprime(int *vet);
void free_vetor(int *vet);

int main (void) {
    
    int *vet;
    inicializa(vet);
    atribui_valores(vet);
    imprime(vet);
    free_vetor(vet);

    return 0;
}

void inicializa(int *vet) {
    vet = (int *) malloc(10*sizeof(int));
    if (vet == NULL) { printf("FALTA DE MEMORIA"); exit(1); }
}

void atribui_valores(int *vet) {
    for(int i = 0; i < 10; i++) {
        vet[i] = ((i+1)*5);
    }
}

void imprime(int *vet) {
    for(int i = 0; i < 11; i++) {
        printf("%d\n", vet[i]);
    }
}

void free_vetor(int *vet) {
  free(vet);
}



