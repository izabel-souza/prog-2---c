#include <stdio.h>
#include <stdlib.h> 

#define comprimento_vetor  sizeof(vet)/sizeof(vet[0])

float max_vet(float *vet);

int main(void) {
	
	float *vet, resultado;
	int n, i;
	
	do {
		printf("Digite inteiro N: ");
		scanf("%d", &n);
	} while (n < 0);
	
	vet = (float *) malloc(n * sizeof(float));
	
	if (vet == NULL) {
		printf("Falta de memória");
		exit(1);
	}
	
	for (i = 0; i < n; i++) {
		printf("Digite os valores para adicionar ao vetor: ");
		scanf("%f", &vet[i]);
	}
	
//	printf("Os valores presentes no vetor sao: \n");
//	for(i = 0; i < n; i ++) {
//		printf("%1.2f\n", vet[i]);
//	}
	
	resultado = max_vet(vet);
	printf("Maior valor do vetor: %1.2f", resultado);
	
	free(vet);
	
	return 0;
}

float max_vet(float *vet) {
	
	float maior = vet[0];
	int j;
		
	for (j = 1; j <= comprimento_vetor; j++) {
		if (vet[j] > maior) {
			maior = vet[j];
		}
	}
	
	return maior;
}
