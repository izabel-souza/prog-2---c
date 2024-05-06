#include <stdio.h>

//a. recebe como par�metro um n�mero inteiro n por valor e dois n�meros inteiros max e min por refer�ncia;

void divs(int n, int *max, int *min);

int main(void) {
	
	int n, maximo, minimo;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n);
	
	divs(n, &maximo, &minimo);
	
	printf("N = %d\n, Maximo divisor = %d\n, Minimo divisor = %d", n, maximo, minimo);
	
	return 0;
}

void divs(int n, int *max, int *min) {
	
	int i, divisores = 0;
	
	for (i == 1; i <= n; i++) {
		if (n % i == 0) {
			divisores += 1;
			if (divisores == 2) {
				*min = i;
			}
			if (i == n) {
				*max = (divisores == i);
			}
		}
		
	}
	
	if (divisores <= 2) {
		printf("%d", 0);
	}
	else {
		printf("%d", 1);
	}
	
}
