#include <stdio.h> <stdlib.h> <string.h>

typedef struct _ALUNO {
    char nome [81];
    float nota1 , nota2;
} ALUNO;

int main (void) {

    int n;
    do {
        printf("Informe n de alunos: ");
        scanf("%d", &n);
    } while (n < 0);

    ALUNO **vetor;
    vetor = (ALUNO**) malloc(n * sizeof(ALUNO*));
    if(vetor == NULL) { printf("Falta de memoria"); exit(1); }

    for(int i = 0; i < n; i++) {
        vetor[i] == NULL;
    }

    FILE *arquivo;
    arquivo = fopen("ex8.txt", "w");
    if (arquivo == NULL) { printf("ERRO"); exit(1); }

    for(int i = 0; i < n; i++) {
        vetor[i] = (ALUNO**) malloc(sizeof(ALUNO));
        printf("Informe o nome do aluno %d: ", i+1);
        scanf(" %80[^\n]", vetor[i]->nome);
        fprintf(arquivo, "%s ", vetor[i]->nome);
        printf("Informe nota 1 e nota 2: ");
        scanf("%f %f", &vetor[i]->nota1, &vetor[i]->nota2);
        fprintf(arquivo, "%.2f %.2f\n", vetor[i]->nota1, vetor[i]->nota2);
    }

    rewind(arquivo);
    
    arquivo = fopen("ex8.txt", "r");
    if (arquivo == NULL) { printf("ERRO"); exit(1); };

    char nome_aluno[81];
    float p1, p2, media;
    for(int i = 0; i < n; i++) {
        fscanf(arquivo, " %80[^\n] %f %f", nome_aluno, &p1, &p2);
        media = ((p1 + p2)/2);
        if(media > 6) {
            printf("Aluno %s tem media maior que 6\n", nome_aluno);
        }
    }
    
    rewind(arquivo);

    int opcao;
    do {
        printf("1 para incluir\n2 para alterar\n3 para consultar\n4 para excluir: ");
        scanf("%d", opcao);
    } while (opcao < 0 && opcao > 4); 

    switch(opcao) {
        case 1:

            arquivo = fopen("ex8.txt", "a");
            if (arquivo == NULL) { printf("ERRO"); exit(1); }

            int m;
            do {
                printf("Informe n de alunos: ");
                scanf("%d", &m);
            } while (m < 0);

            ALUNO **vetor_adicional;
            vetor_adicional = (ALUNO**) malloc(m * sizeof(ALUNO*));
            if(vetor_adicional == NULL) { printf("Falta de memoria"); exit(1); }

            for(int i = 0; i < n; i++) {
                vetor_adicional[i] == NULL;
            }

            for(int i = 0; i < m; i++) {
                vetor_adicional[i] = (ALUNO**) malloc(m*sizeof(ALUNO*));
                printf("Informe o nome do aluno : ");
                scanf(" %80[^\n]", vetor_adicional[i]->nome);
                fprintf(arquivo, "%s ", vetor_adicional[i]->nome);
                printf("Informe nota 1 e nota 2: ");
                scanf("%f %f", &vetor_adicional[i]->nota1, &vetor_adicional[i]->nota2);
                fprintf(arquivo, "%.2f %.2f\n", vetor_adicional[i]->nota1, vetor_adicional[i]->nota2);
            }
            
            fclose(arquivo);
            break;

        case 2: 
            

        break;

        case 3:

            arquivo = fopen("ex8.txt", "r");
            char aluno_consulta[81];
            float p1, p2;
            printf("Informe nome do aluno que você quer consultar: ");
            scanf(" %80[^\n]", aluno_consulta);
            while(fscanf(arquivo, " %80[^\n] %f %f", nome_aluno, &p1, &p2)) {
                if(nome_aluno == aluno_consulta) {
                    printf("ALUNO %s\n NOTAS:\nP1=%.2f e P2=%.2f", nome_aluno, p1, p2);
                }
            }

            fclose(arquivo);
            break;

        case 4: ; break;
    }

    return 0;
}