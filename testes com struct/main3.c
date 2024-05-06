// Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

#include <stdio.h> <string.h> <stdlib.h>

typedef struct info {
    char nome[80];
    int matricula;
    char curso[40];
} Alunos;

int main (void) {

    Alunos **vetor;
    vetor = (Alunos*) malloc(2 * sizeof(Alunos));

    for(int i = 0; i < 2; i++) {
        vetor[i] = (Alunos*) malloc(sizeof(Alunos*));
        printf("ALUNO %d\n", i+1);
        printf("Informe o nome: ");
        scanf(" %79[^\n]%c", vetor[i]->nome);
        printf("Informe a matricula: ");
        scanf("%d", &vetor[i]->matricula);
        printf("Informe o curso: ");
        scanf(" %39[^\n]%c", vetor[i]->curso);
    }

    for(int i = 0; i<2;i++) {
        printf("\nALUNO %d\n",i+1);
        printf("NOME: %s\nMATRICULA: %d\nCURSO: %s\n \n", vetor[i]->nome, vetor[i]->matricula, vetor[i]->curso);
    }

    for(int i = 0; i < 2; i++) {
        free(vetor[i]);
    }

    return 0;
}