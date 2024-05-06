#include <stdio.h>
#include <locale.h>

float media(float p1, float p2, float p3);
void classificacao(float resultado);

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float p1, p2, p3;
	float resultado;
	
	do {
		printf("Digite as notas das três provas: ");
		scanf("%f %f %f", &p1, &p2, &p3);
	} while ((p1 < 0) || (p2 < 0) || (p3 < 0));
	
	resultado = media(p1,p2,p3);
	
	printf("Média foi %1.2f\n", resultado);
	classificacao(resultado);
	
	return 0;
}

float media(float p1, float p2, float p3){
	float resultado;
	resultado = ((p1 + p2 + p3)/3);
	return resultado;
}

void classificacao(float resultado) {
	
	if (resultado >= 6) {
		printf("Aprovado");
	}
	else if ((resultado >= 4) && (resultado < 6)) {
		printf("VS");
	}
	else {
		printf("Reprovado");
	}
	
}

