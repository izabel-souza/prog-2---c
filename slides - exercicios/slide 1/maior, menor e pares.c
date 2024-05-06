#include <stdio.h>

int main(void) {

	int a, b, c;
	printf("Digite 3 valores inteiros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int maior, menor = a;	
	if (b > a) {
		maior == b;
		if (c < a) {
			menor == c;
		}
	}
	if (c > a) {
		maior == c;
		if (b < a) {
			menor == b;
		}
	}
	
	int media;
	media = ((a + b + c)/3);
	
	printf("Os valores informados foram: %d, %d e %d\n", a, b, c);
	printf("O maior é %d\n", maior);
	printf("O menor é %d\n", menor);
	printf("A média é %d\n", media);
	
	if (a % 2 == 0) {
		printf("%d é par", a);
	}
	if (b % 2 == 0) {
		printf("%d é par", b);
	}
	if (c % 2 == 0) {
		printf("%d é par", c);
	}
	
	return 0;
}
