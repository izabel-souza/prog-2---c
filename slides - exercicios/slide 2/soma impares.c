#include <stdio.h>
#include <locale.h>

void somatorio_impares(int valor);

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");

	int valor;
	printf("Informe um valor: ");
	scanf("%d", &valor);
	
	somatorio_impares(valor);

	return 0;
}

void somatorio_impares(int valor) {
	
	int inicio;
	int soma = 0;
	for(inicio = 1; inicio <= valor; inicio+=2) {
		soma += inicio;
	}
	printf("O resultado do somat�rio dos valores �mpares de 1 at� %d = %d", valor, soma);
}

