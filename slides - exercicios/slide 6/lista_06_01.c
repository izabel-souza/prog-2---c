#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
     
     int n, i, acumulador = 0, vetTamanho = 0;
     float *vetor;
     do {
         printf("Informe n: ");
         scanf("%d", &n);
     } while (n < 0);
     
     vetor = (float *) malloc(n * sizeof(n));
     
     if (vetor == NULL) { printf("Falta memoria"); exit(1); }
     
     for (i = 0; i < n; i++) {
         scanf("%f", &vetor[i]);
     }
     
     float media;
     for (i = 0; i < n; i++) {
         acumulador += vetor[i];
     }
     media = (acumulador/n);
     printf("Media = %.2f\n", media);
     
     float vetresposta[1];
     for (i = 0; i < n; i++) {
         if (vetor[i] >= media) {
             vetresposta[vetTamanho] = vetor[i];
             vetTamanho++;
         }
     }
     
    printf("Vetor inicial de tamanho %d: \n", n);
    for (i = 0; i < n; i++) {
    	printf("%.2f\n", vetor[i]);
	}
	
	printf("Vetor resposta de tamanho %d: \n", vetTamanho);
	for (i = 0; i < vetTamanho; i++) {
		printf("%.2f\n", vetresposta[i]);
	}

    return 0;
}
