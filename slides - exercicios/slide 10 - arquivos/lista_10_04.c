#include <stdio.h> <stdlib.h> <string.h>

int main (void) {

    char arquivo_lido[] = "lista_10_04.c", arquivo_escrito[] = "lista_10_04.txt";
    // printf("Nome do arquivo a ser lido: ");
    // scanf(" %19[^\n]", arquivo_lido);
    // printf("Nome do arquivo sem comentarios: ");
    // scanf(" %19[^\n]", arquivo_escrito);
    
    int c;
    FILE *fp;
    FILE *s_comentarios;
    fp = fopen(arquivo_lido, "r");
    s_comentarios = fopen(arquivo_escrito, "w");
    while((c = fgetc(fp)) != EOF) {
        if((c == "\n") && (strstr("\\") == NULL)) {
            fprintf(s_comentarios, "%s", )
        }
    }
    
    fclose(fp);

    return 0;
}