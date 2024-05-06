#include <stdio.h>

int main() {
	
	int segundos, horas, minutos, resto;
	printf("Informe os segundos: ");
	scanf("%d", &segundos);
	
	horas = segundos/3600;
	resto = segundos % 3600;
	minutos = resto/60;
	segundos = resto % 60;
	
	printf("%d:%d:%d", horas, minutos, segundos);
	
	return 0;
}

