//Fazer um programa para:
//a. declarar vari�veis a, b, c, d do tipo int.
//b. declarar vari�veis e, f, g, h do tipo float.
//c. declarar vetor v de 10 elementos do tipo char.
//d. declarar vari�vel x do tipo int.
//e. criar um ponteiro apontando para o endere�o de a.
//f. incrementar o ponteiro, mostrando o conte�do do endere�o apontado (em forma de n�mero).
//Caso o endere�o coincida com o endere�o de alguma outra vari�vel, informar o fato.

#include <stdio.h>

char criacao_vet(char vetor);

int main(void) {
	
	int a,b,c,d;
	float e,f,g,h;
	
	char vetor[10] = {};
	vetor = criacao_vet(vetor);
	
	int x;
	int *p = &a;
	
	return 0;
}

char criacao_vet(char vetor[10]) {
	
}

