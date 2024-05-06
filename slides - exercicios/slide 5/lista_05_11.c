#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void frase_invertida(char *frase);

int main (void) {
    
    char frase[20];
    printf("Informe uma string: ");
    scanf("%19[^\n]%c", frase);
    
    frase_invertida(frase);
    
    return 0;
}

void frase_invertida(char *frase) {
    
    int i, tamanho = strlen(frase);
    
    for(i = (tamanho - 1); i >= 0; i--) {
         printf("%c", frase[i]);
    }
    
}
