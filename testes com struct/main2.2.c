// Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e armazene os dados em uma estrutura.
#include <stdio.h> <stdlib.h> <string.h>

typedef struct endereco {
    char rua[80];
    char cidade[80];
    int numero;
} Endereco;

typedef struct dados {
    char nome[80];
    int idade;
    Endereco casa;
} Dados;

void criacao_struct(Dados *dados_pessoa);
void impressao(Dados *dados_pessoa);

int main (void) {

    Dados dados_pessoa;
    criacao_struct(&dados_pessoa);
    impressao(&dados_pessoa);

    return 0;
}

void criacao_struct(Dados *dados_pessoa) {
    printf("Informe o nome: ");
    scanf(" %79[^\n]%c", dados_pessoa->nome);
    printf("Informe a idade: ");
    scanf("%d", &dados_pessoa->idade);
    printf("Informe cidade: ");
    scanf(" %79[^\n]%c", dados_pessoa->casa.cidade);
    printf("Informe rua: ");
    scanf(" %79[^\n]%c", dados_pessoa->casa.rua);
    printf("Informe numero casa: ");
    scanf("%d", dados_pessoa->casa.numero);
}

void impressao(Dados *dados_pessoa) {
    printf("Nome: %s\n Idade: %d\n Cidade:%s  Rua:%s   Numero:%d", dados_pessoa->nome, dados_pessoa->idade, dados_pessoa->casa.cidade, dados_pessoa->casa.rua, dados_pessoa->casa.numero);
}