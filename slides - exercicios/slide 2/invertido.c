#include <stdio.h>

int inverte(unsigned int x);

int main(void) {
	
	unsigned int x;
	unsigned int resultado;
	do {
		printf("Digite um valor inteiro: ");
		scanf("%u", &x);
	} while (x < 0);
	
	resultado = inverte(x);
	printf("O valor inverso de %u = %u", x, resultado);
	
	return 0;
}

int inverte(unsigned int x) {
	
}


