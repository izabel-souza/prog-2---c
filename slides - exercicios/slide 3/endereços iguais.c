//13. Fazer um programa para:
//a. declarar variáveis a, b, c, d do tipo int.
//b. declarar variáveis e, f, g, h do tipo float.
//c. declarar vetor v de 10 elementos do tipo char.
//d. declarar variável x do tipo int.
//e. criar um ponteiro apontando para o endereço de a.
//f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
//Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.

#include <stdio.h> <string.h> <stdlib.h> <conio.h>

int main(void) {
	
	int a, b, c, d, x;
	float e, f, g, h;
	char v[10];
	int *p = &a;
	
	for (x = 0; x < *p; x++) {
		if ((p == &b) || (p == &c) || (p == &d) || (p == e) || (p == f) || (p == g) || (p == h)) {
			printf("%f", p[x]);
		}
	}
	
	
	return 0;
}
