//Implemente uma fun��o que receba como par�metros um vetor de n�meros inteiros v e seu
//comprimento n, e verifique se os elementos do vetor correspondem aos termos de uma PA
//(Progress�o Aritm�tica), isto �, se existe um n�mero inteiro k tal que v[i]=v[0]+k*i. Caso os
//elementos do vetor correspondam aos termos de uma PA, a fun��o deve retornar o valor
//calculado para k. Por exemplo, se for passado para essa fun��o o vetor {2,10,18,26,34} a fun��o
//deve retornar o valor 8. Caso o vetor n�o corresponda a uma PA, a fun��o deve retornar o valor 0.
//Assuma que o vetor sempre ter� pelo menos 3 elementos. Essa fun��o deve ter o seguinte
//prot�tipo:
//int testa_PA(int n, int* v)

#include <stdio.h>
#include <stdlib.h>

int testa_PA(int n, int *v);

int main(void) {
	
	int *v;
	int n, i, resultado;
	do {
		printf("n: ");
		scanf("%d", &n);
	} while (n < 0);
	
	v = (int *) malloc (n * sizeof(int));
	if (v == NULL) {
		printf("Falta de memoria");
		exit(1);
	}
	
	for (i = 0; i < n; i++) {
		printf("Informe o %d valor do vetor: ", i);
		scanf("%d", &v[i]);
	}
	
	resultado = teste_PA(n, v);
	printf("%d", resultado);
	
	free(v);
	
	return 0;
}

int teste_PA(int n, int *v) {
	
	int k;
	int pa = 0;
	while (n >= 0) {
		if ((v[n] - v[n-1]) == (v[n-1] - v[n-2])) {
			pa = 1;
		}	
	}
	k = (v[1] - v[2]);
	return k;	
}
