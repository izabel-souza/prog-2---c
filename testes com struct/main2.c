// Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e armazene os dados em uma estrutura.

#include <stdio.h> <stdlib.h> <string.h>

typedef struct endereco {
    char cidade[30];
    char rua[80];
    int numero;
} Endereco;

typedef struct info {
    char nome[80];
    int idade;
    Endereco moradia;
} Info;

int main (void) {

    Info cadastro;
    printf("Informe nome: ");
    scanf(" %79[^\n]%c", cadastro.nome);
    printf("Informe idade: ");
    scanf("%d", &cadastro.idade);
    printf("Informe cidade: ");
    scanf(" %29[^\n]%c", cadastro.moradia.cidade);
    printf("Informe rua: ");
    scanf(" %29[^\n]%c", cadastro.moradia.rua);
    printf("Informe numero da casa: ");
    scanf("%d", &cadastro.moradia.numero);

    printf("CADASTRO: \nNOME: %s\nIDADE: %d\nENDERECO: CIDADE %s, RUA %s, NUMERO %d", cadastro.nome, cadastro.idade, cadastro.moradia.cidade, cadastro.moradia.rua, cadastro.moradia.numero);
 
    return 0;
}