#include <stdio.h>
#include <stdlib.h>
#define comprimento sizeof(vet)/sizeof(int)

int maiores(int n, int *vet, int x);

int main(void) {
	
	int n;
	int *vet;
	do {
		printf("Digite o tamanho do vetor: ");
		scanf("%d", &n);
	} while (n < 0);
	
	vet = (int *) malloc(n * sizeof(int));
	
	if (vet == NULL) {
	    printf("Falta de memoria");
	    exit(1);
	} 
	
	int i;
	for (i = 0; i < n; i++) {
		printf("Digite um valor inteiro para colocar na lista: ");
		scanf("%d", &vet[i]);
	}
	
	int x;
	do {
		printf("Informe x: ");
		scanf("%d", &x);
	} while (x < 0);
	
	int resultado;
	resultado = maiores(n, vet, x);
	printf("%d", resultado);
	
	free(vet);
	
	return 0;
}

int maiores(int n, int *vet, int x) {
	
	int j;
	int *maiores_x;
	for (j = 0; j < comprimento; j++) {
		if (vet[j] > x) {
			maiores;
		}	
	}
	
}
