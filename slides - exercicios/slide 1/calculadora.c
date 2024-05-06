#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
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
	
	printf("Pares: \n");
	if (a % 2 == 0) {
		printf("%d", a);
	}
	else if (b % 2 == 0) {
		printf("%d", b);
	}
	if (c % 2 == 0) {
		printf("%d", c);
	}
	
	return 0;

}
