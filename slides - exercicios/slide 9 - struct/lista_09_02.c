#include <stdio.h> <stdlib.h> <string.h>

typedef struct data {
    int dia;
    int mes;
    char nomeMes[12];
} Data;

void main() {
    Data aniversarios[3] = { {5,1,"JANEIRO"}, {4,2,"FEVEREIRO"}, {10,3,"MAIO"} };
    int a;
    Data *p_dt;
    p_dt = &aniversarios[2];
    printf("Nome do mes %d é: %s.", p_dt->mes, p_dt->nomeMes);
    strcpy(p_dt->nomeMes, "MARCO");
    printf("\nNumero de letras : %d\n", strlen(p_dt->nomeMes));
    Data p_dt2 = (Data **) malloc(sizeof(Data*));
    p_dt2 = &aniversarios[0];

    printf("\n");
    printf("LETRA A\np_dt2 foi declarado como uma variavel do tipo Data e não como ponteiro;\nNao e possível alocar uma variável dinamicamente\n");
    printf("\n");
    printf("LETRA B\nComo alterou nomeMes de MAIO para MARCO, 5 e impresso na tela");
}
//a. O programa acima pode ter no máximo 1 erro. Caso tiver, explique qual é o erro.
//b. Qual o valor mostrado na tela no segundo (último) printf?