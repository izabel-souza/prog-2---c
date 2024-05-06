#include <stdio.h> <string.h> <stdlib.h>

typedef struct Alunos {
    char nome[80];
    int matricula;
    char curso[40];
} Alunos;

void iniciar(int n, Alunos **vetor);
void atribuir(int n, Alunos **vetor);
void imprime(int n, Alunos **vetor);
void freevetor(int n, Alunos **vetor);

int main (void) {

    Alunos **vetor;
    int n; {
        printf("Informe n: ");
        scanf("%d", &n);
    } while(n < 0);
    
    vetor = (Alunos *) malloc(n * sizeof(Alunos));
    iniciar(n, vetor);
    atribuir(n, vetor);
    imprime(n, vetor);
    freevetor(n, vetor);

    return 0;
}

void iniciar(int n, Alunos **vetor) {
    for(int i; i < n; i++) {
        vetor[i] = NULL;
    }
}

void atribuir(int n, Alunos **vetor) {
    for(int i = 0; i < n; i++) {
        vetor[i] = (Alunos*) malloc(sizeof(Alunos));
        printf("ALUNO %d\n", i+1);
        printf("Informe o nome: ");
        scanf(" %79[^\n]%c", vetor[i]->nome);
        printf("Informe a matricula: ");
        scanf("%d", &vetor[i]->matricula);
        printf("Informe o curso: ");
        scanf(" %39[^\n]%c", vetor[i]->curso);
    }
}  

void imprime(int n, Alunos **vetor) {
    for(int i = 0; i < n;i++) {
        printf("\nALUNO %d\n",i+1);
        printf("NOME: %s\nMATRICULA: %d\nCURSO: %s\n \n", vetor[i]->nome, vetor[i]->matricula, vetor[i]->curso);
    }
}

void freevetor(int n, Alunos **vetor) {
    for(int i = 0; i < n; i++) {
        free(vetor[i]);
        vetor[i] = NULL;
    }
}