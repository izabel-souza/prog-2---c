// Implemente um programa em C que utiliza a estrutura apresentada para implementar uma lista. O programa deve mostrar ao usuario duas opcoes. Se o usuario escolher 1, a lista deve ser impressa; se escolher 2, ele deve entrar com o valor do conteudo do novo elemento da lista.

#include <stdio.h> <string.h> <stdlib.h>

typedef struct valor {
    int x;
    Valor *prox;
} Valor;

Valor *lista_inicializa(void);
Valor *lista_insere(Valor *ponteiro, int x);
void lista_imprime(Valor *ponteiro);

int main (void) {

    Valor *ponteiro;
    ponteiro = lista_inicializa();
    int opcao;
    printf("1 para impressao\n2 para inserir valores");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: lista_imprime(ponteiro); break;
        case 2: ponteiro = lista_insere(ponteiro, ponteiro->x); break;
    }

    return 0;
}

Valor *lista_inicializa(void) {
    return NULL;
} 

Valor *lista_insere(Valor *ponteiro, int x) {
    Valor *novo = (Valor*) malloc(sizeof(Valor));
    printf("Insira um inteiro: ");
    scanf("%d", &novo->x);
    novo->prox = ponteiro;

    return novo;
}

void lista_imprime(Valor *ponteiro) {
    Valor *p;
    for(p = ponteiro; p != NULL; p->prox) {
        printf("valor = %d\n", p->x);
    }
}