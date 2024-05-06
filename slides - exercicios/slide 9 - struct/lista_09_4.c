#define MAX 4
#define MAXNOME 31
#include <stdio.h> <stdlib.h> <string.h>

void atribui(char **nomes, int indice, char *nome);
char *get_sobrenome(char *nome);

main() {

    int i;
    char *sobrenome;
    char **nomes;
    nomes = (char **) malloc(MAX*sizeof(char *));

    for (i=0 ; i<MAX ; i++) {
        nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);
    }

    atribui(nomes,0,"Fulano Silva"); 
    atribui(nomes,1,"Maria do Carmo");
    atribui(nomes,2,"Beltrano Belmonte"); 
    atribui(nomes,3,"Pedro dos Santos");

    for (i=0 ; i<MAX ; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d",strlen(sobrenome)>5?i:0);
    }
    printf("\n%c", nomes[0][3]);

}

void atribui(char **nomes, int indice, char *nome) {
    nomes[indice] = nome;
}

char *get_sobrenome(char *nome) {
    char *sobrenome_retorno;
    int tamanho = 0;
    int comprimento = strlen(nome);
    for(int i = (comprimento - 1); i > 0; i--) {
        if(nome[i] != " ") {
            tamanho++;
        }
    }
    
}