#include <stdio.h> <string.h> <stdlib.h>

float media(char* mat, char* nome_arquivo);

int main (void) {

    char arquivo[20];
    char mat[11];
    float media_aluno;

    printf("Informe a matricula: ");
    scanf(" %19s", mat);
    printf("Informe o arquivo: ");
    scanf(" %10s", arquivo);

    media_aluno = media(mat, arquivo);
    if (media_aluno != -1.0) {
        printf("%.2f", media_aluno);
    }

    return 0;
}

float media (char* mat, char* nome_arquivo){

    FILE *fp;
    fp = fopen(nome_arquivo, "r");
    if (fp == NULL) { printf("ERRO"); exit(1); }

    int mat_igual;
    float media, p1, p2, p3;
    char matricula_aluno[11];
    while(fscanf(nome_arquivo, " %10s %f %f %f", matricula_aluno, &p1, &p2, &p3) == 4) {

        mat_igual = strcmp(matricula_aluno, mat);
        if (mat_igual == 0) {
            fclose(fp);
            media = ((p1+p2+p3)/3);
            return media;
        }
        else {
            return -1.0;
        }
    }
    fclose(fp);
}