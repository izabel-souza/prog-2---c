#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b, c;
	do {
		printf("Digite os valores de a, b e c: ");
		scanf("%d %d %d", &a, &b, &c);
	} while ()
	
	int raiz, numero;
	numero = ((b*b)-4*a*c);
	raiz = sqrt(numero);
	
	int x1, x2;
	if (b < 0) {
		x1 = ((b + raiz)/2);
		x2 = ((b - raiz)/2);
	}
	else {
		x1 = ((-b + raiz)/2);
		x2 = ((-b - raiz)/2);
	}
	
	printf("As raizes da função são: %d e %d", x1, x2);
	
	return 0;
}
