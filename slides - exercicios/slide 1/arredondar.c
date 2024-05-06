#include <stdio.h>
#include <math.h>

int arredondamento(float x);

int main(void) {
	
	float x;
	int resultado;
	
	printf("Digite um float: ");
	scanf("%f", &x);
	
	resultado = arredondamento(x);
	printf("%f = %d", x, resultado);
	
	return 0;
}

int arredondamento(float x) {
	int result;
	result = round(x);
	return result;
}
