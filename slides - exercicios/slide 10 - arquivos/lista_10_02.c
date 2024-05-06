#include <stdio.h> <stdlib.h> <string.h>

float busca (char* arquivo, char* matricula);

int main (void) {

    char arquivo[] = "lista_10_02.txt";
    char *matricula;
    printf("Informe a matricula: ");
    scanf(" %10[^\n]%c");
    float cr;
    cr = busca(arquivo, matricula);

    return 0;
}

float busca (char* arquivo, char* matricula) {
    for(int i = 0; i < 4; i++) {
        
    }
}