#include <stdio.h> <stdlib.h> <string.h>

typedef struct endereco {
    char rua[100];
    int numero; 
} Endereco;

typedef struct notas {
    float p1, p2, p3; 
} Notas;

typedef struct aluno {
    int mat; 
    char nome[81]; 
    Notas nota;
    Endereco *end;
} Aluno;

Aluno **alocaAlunos(int n);

main(void){
    Aluno **alunos; //alunos = vetor de ponteiros
    alunos = alocaAlunos(3);
    atribui(alunos,0,10,"Um",1,1,1,"Getulio Vargas",100);
    atribui(alunos,1,20,"Dois",8,8,8,"Amaral Peixoto",200);
    atribui(alunos,2,30,"Tres",9,9,9,"Ouro Verde",300);
}

Aluno **alocaAlunos(int n) {
    Aluno **alunos; //alunos
    for(int i = 0; i<n; i++) {

    }
}