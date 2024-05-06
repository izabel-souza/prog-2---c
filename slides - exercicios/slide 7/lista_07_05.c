#include <stdio.h> <stdlib.h> <string.h>

int main (void) {

    char frase[80];
    //Pede string para o usuario
    printf("Informe uma string: ");
    scanf(" %79[^\n]%c", frase);

    //Tira os espaços em branco 
    int j = 0;
    for(int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            frase[j] = frase[i];
            j++;
        }
    }
    frase[j] = '\0';

    int blocos;
    blocos = (strlen(frase)/5);
    for(int i = 0; i < blocos; i++) {
        for(int j = 0; frase[j] != '\0'; j++) {
            for(int k = 0; frase[k] != '\0'; k++) {
                if (j % 5 == 0) {
                    j = 0;
                }
                frase[k] = (frase[j] + 1);
            }
        }
    }
    
    printf("%s", frase);
    return 0;

}