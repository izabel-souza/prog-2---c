//Fazer um programa para:
//a. declarar variáveis a, b, c, d do tipo int.
//b. declarar variáveis e, f, g, h do tipo float.
//c. declarar vetor v de 10 elementos do tipo char.
//d. declarar variável x do tipo int.
//e. criar um ponteiro apontando para o endereço de a.
//f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
//Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.

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

