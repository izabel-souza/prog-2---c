#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main (void) {

    char vet[80];
    int i;
    for (i = 0; i < 80; i++) {
    	printf("Informe uma frase: ");
        vet[i] = getch();
    }
    vet[i] = '\0';

	int j;
	for (j = 0; j < 80; j++) {
		if (vet[i] == ' ') {
        	printf("%s\n", vet);
		}
	}

    return 0;
}
