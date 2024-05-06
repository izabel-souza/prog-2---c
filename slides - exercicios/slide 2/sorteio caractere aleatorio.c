// Autor: Renato Silva

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char sorteio() {
    srand(time(NULL));
    return 'a' + (rand() % 26);
}

int main() {
    char sorteado = sorteio();
    char chute;

    printf("Chute: ");
    scanf("%c", &chute);
    if (chute < 'a' || chute > 'z')
        return 1;

    if (chute < sorteado)
        printf("O chute %c � menor que a letra sorteada %c\n", chute, sorteado);
    else if (chute > sorteado)
        printf("O chute %c � maior que a letra sorteada %c\n", chute, sorteado);
    else
        printf("Voc� acertou a letra sorteada %c\n", sorteado);

    return 0;
}
