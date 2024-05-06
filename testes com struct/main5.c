// struct Vetor{
    // float x;
    // float y;
    // float z;
// };
// para representar um vetor no R3 implemente um programa que calcule a soma de dois vetores.

#include <stdio.h> <stdlib.h> <string.h>

typedef struct vetor {
    float x, y, z;
} Vetor;

void atribuir(Vetor *variavel);
void imprime(Vetor *variavel);
void somatorio(Vetor *variavel1, Vetor *variavel2, Vetor *variavel3);

int main (void) {

    Vetor r1;
    Vetor r2;
    Vetor r3;

    printf("LISTA 1: \n");atribuir(&r1); printf("LISTA 2: \n"); atribuir(&r2);
    printf("LISTA 1\n"); imprime(&r1); printf("LISTA 2\n"); imprime(&r2);
    somatorio(&r1, &r2, &r3);
    printf("LISTA 3\n"); imprime(&r3);

    return 0;
}

void atribuir(Vetor *variavel) {
    printf("Informe x y z: ");
    scanf("%f %f %f", &variavel->x, &variavel->y, &variavel->z);
}

void imprime(Vetor *variavel) {
    printf("%.2f %.2f %.2f\n", variavel->x, variavel->y, variavel->z);
}

void somatorio(Vetor *variavel1, Vetor *variavel2, Vetor *variavel3){
    variavel3->x = variavel1->x + variavel2->x;
    variavel3->y = variavel1->y + variavel2->y;
    variavel3->z = variavel1->z + variavel2->z;
}