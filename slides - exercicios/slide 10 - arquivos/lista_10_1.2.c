#include <stdio.h> <stdlib.h> <string.h>

typedef struct funcionario {
    char nome[81]; 
    float valor_hora; 
    int horas_mes;
} Funcionario;

int main (void) {

    FILE *arquivo;
    arquivo = fopen("lista_10_01.txt", "r");
    if (arquivo == NULL) { printf("ERRO"); exit(1); }

    Funcionario **vetor;
    int n = 3;
    vetor = (Funcionario *) malloc(n * sizeof(Funcionario));
    if(vetor == NULL) { exit(1); }

    for(int i = 0; i < n; i++) {
        vetor[i] = (Funcionario *) malloc(sizeof(Funcionario));
        fscanf(arquivo, " %80[^\n]%c\n", vetor[i]->nome);
        fscanf(arquivo, "%f %d", &vetor[i]->valor_hora, &vetor[i]->horas_mes);
    }

    fclose(arquivo);

    for(int i = 0; i < n; i++) {
        printf("\nFUNCIONARIO %d\nNOME: %s\nVALOR DA HORA: R$ %.2f\nHORAS NO MES: %d\n", i+1, vetor[i]->nome, vetor[i]->valor_hora, vetor[i]->horas_mes);
    }

    free(vetor);

    return 0;
}