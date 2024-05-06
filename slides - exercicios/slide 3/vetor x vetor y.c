//Escreva um programa em C para ler um vetor X de 10 elementos inteiros. Logo após copie os
//elementos do vetor X para um vetor Y fazendo com que o 1o. elemento de X seja copiado para o
//10o. de Y, o 2o. de X para o 9o. de Y e assim sucessivamente. Após o término da cópia, imprimir o
//vetor Y.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int vetorx[10];
	int i;
	for (i = 0; i < 10; i++) {
		printf("Informe o %dº elemento da lista: ", i);
		scanf("%d", &vetorx[i]);
	}
	
	int vetory[10];
	int j, k = 0;
	for (j = 9; j >= 0; j--) {
		vetory[k] = vetorx[j];
		k++;
	}

	int m;
	for (m = 0; m < 10; m++) {
		printf("%d\n", vetory[m]);
	}

	return 0;
}

