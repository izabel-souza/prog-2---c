#include <stdio.h> 
#include <stdlib.h> 

typedef struct elemento {
    float info;
    struct elemento *prox; 
} Elemento;

Elemento *lista_inicializa(void);
Elemento* filtra(Elemento *lst, float min, float max);

int main (void) {

    Elemento *ponteiro;
    ponteiro = lista_inicializa();


    return 0;
}

Elemento *lista_inicializa(void) {
    return NULL;
}