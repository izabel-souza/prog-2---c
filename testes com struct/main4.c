#include <stdio.h> <stdlib.h> <string.h>

typedef struct alunos {
    int matr;
    char nome[81];
    float q1, q2, q3;
} Alunos;

void inicializar(int n, Alunos **vetor);
void atribuir(int n, Alunos **vetor);
void maior_nota_p1(int n, Alunos **vetor);
void maior_media(int n, Alunos **vetor);

int main (void) {

    Alunos **vetor;
    int n = 2;
    inicializar(n, vetor);
    atribuir(n, vetor);
    maior_nota_p1(n, vetor);

    return 0;
}

void inicializar(int n, Alunos **vetor) {
    vetor =  (Alunos*) malloc(n * sizeof(Alunos));
    for(int i = 0; i < n; i++) {
        vetor[i] = NULL;
    }
}

void atribuir(int n, Alunos **vetor){
    for(int i = 0; i < n; i++) {
        vetor[i] = (Alunos *) malloc(sizeof(Alunos));
        printf("Matricula: ");
        scanf("%d", &vetor[i]->matr);
        printf("Nome: ");
        scanf(" %80[^\n]%c", vetor[i]->nome);
        printf("Prova 1, Prova 2 e Prova 3: ");
        scanf("%f %f %f", &vetor[i]->q1, &vetor[i]->q2, &vetor[i]->q3);
    }
}

void maior_nota_p1(int n, Alunos **vetor) {
    float maior_nota = 0.0;
    char *aluno_nome;
    for(int i = 0; i < n; i++) {
        if (vetor[i]->q1 > maior_nota) {
            maior_nota = vetor[i]->q1;
            aluno_nome = vetor[i]->nome;
        }
    }
    printf("A maior nota da p1 é: %f de: %s", maior_nota, aluno_nome);
} 

void maior_media(int n, Alunos **vetor) {
    float maior_media = 0.0;
    float *media;
    char *aluno_nome;
    media = (float*) malloc(n * sizeof(float));

    for(int i = 0; i < n; i++) {
        media[i] = (vetor[i]->q1 + vetor[i]->q2 + vetor[i]->q3);
    }

    for(int i = 0; i < n; i++) {
        if(media[i] > maior_media) {
            maior_media = media[i];
            aluno_nome = vetor[i]->nome;
        }
    }
    printf("A maior media é %f de %s", maior_media, aluno_nome);
}