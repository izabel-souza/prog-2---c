#include <stdio.h> <stdlib.h> <string.h>

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct local {
    char ender[81];
    int sala;
} Local;

typedef struct candidato {
    int inscr;
    char nome[81]; 
    Data nasc; 
    Local *loc;
} Candidato;

void opcao(int opcao, int n, Candidato *candidatos);
void preenche(int n, Candidato *candidatos);
void impressao(int n, Candidato *candidatos);
void alterar_local(int n, Candidato *candidatos);

int main (void) {
    
    int n;
    do {
        printf("Informe n: ");
        scanf("%d", &n);
    } while (n < 0);

    Candidato *candidatos;
    candidatos = (Candidato*) malloc(n *sizeof(Candidato));
    if(candidatos == NULL) { exit(1); }

    int opcao_escolhida, resultado;
    do {
        printf("Informe\n 1 para leitura\n2 para impressao\n3 para alterar endereco e sala: ");
        scanf("%d", &opcao_escolhida);
    } while (opcao < 0 || opcao > 3);

    opcao(opcao_escolhida, n, candidatos);
    
    return 0;
}

void opcao(int opcao, int n, Candidato *candidatos) {
    switch(opcao) {
        case 1: preenche(n, candidatos); break;
        case 2: impressao(n, candidatos); break;
        case 3: alterar_local(n, candidatos); break;
    }
}

void preenche(int n, Candidato *candidatos) {
    for(int i = 0; i < n; i++) {
        printf("CANDIDATO %d\n", i+1);
        printf("Informe inscricao: ");
        scanf("%d", &candidatos[i].inscr);
        printf("Informe nome: ");
        scanf(" %80[^\n]%c", candidatos[i].nome);
        printf("Informe data de nascimento: ");
        scanf("%d %d %d", &candidatos[i].nasc.dia, &candidatos[i].nasc.mes, &candidatos[i].nasc.ano);

        candidatos[i].loc = malloc(sizeof(Local));

        printf("Informe local: ");
        scanf(" %80[^\n]%c", candidatos[i].loc->ender);
        printf("Informe sala: ");
        scanf("%d", &candidatos[i].loc->sala);
    }
}

void impressao(int n, Candidato *candidatos) {
    for(int i = 0; i < n; i++) {
        printf("CANDIDATO %d\n", i+1);
        printf("INSCRICAO: %d\nNOME: %s\n DATA DE NASCIMENTO: %d/%d/%d\nLOCAL: endereco %s, sala: %d", candidatos[i].inscr, candidatos[i].nome, candidatos[i].nasc.dia, candidatos[i].nasc.mes, candidatos[i].nasc.ano, candidatos[i].loc->ender, candidatos[i].loc->sala);
    }
}

void alterar_local(int n, Candidato *candidatos) {
    char candidato_troca[80];
    printf("Informe o nome do candidato o qual quer alterar o endereco: ");
    scanf(" %80[^\n]%c", candidato_troca);
    for(int i = 0; i < n; i++) {
        if (candidatos[i].nome == candidato_troca) {
            free(candidatos[i].loc->ender);
            free(candidatos[i].loc->sala);
            printf("Informe o novo local: ");
            scanf(" %80[^\n]%c", candidatos[i].loc->ender);
            printf("Informe a nova sala: ");
            scanf("%d", &candidatos[i].loc->sala);
        }
    }
}






