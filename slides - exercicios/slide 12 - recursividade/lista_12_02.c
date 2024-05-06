#include <stdio.h> <stdlib.h> <string.h>

void inicia_vetor(int n, int *vet);
void atribui_vetor(int n, int *vet);
int somatorio_impares(int n, int *vet);

int main (void) {

    int *vet;
    int n;
    do {
        printf("Informe n: ");
        scanf("%d", &n);
    } while (n < 0);

    inicia_vetor(n, vet);
    atribui_vetor(n, vet);
    int somatorio_valores = 0;
    somatorio_valores = somatorio_impares(n, vet);
    printf("%d", somatorio_valores);

    return 0;
} 

void inicia_vetor(int n, int *vet) {
    vet = (int *) malloc(n * sizeof(int));
}

void atribui_vetor(int n, int *vet) {
    for(int i = 0; i < n; i++) {
        printf("Informe valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }
}

int somatorio_impares(int n, int *vet) {
    int somatorio;
    if (n > 1) {
        if(vet[n] % 2 != 0) {
            somatorio += vet[n];
        }
    }
    else {
        return 0;
    }
    return somatorio + somatorio_impares(n-1, vet);
}

// Faça uma função recursiva para imprimir a soma dos números ímpares de um vetor.

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void inicializar(int *vet, int n);
// void atribuir(int *vet, int n);
// int soma_impares_rec(int *vet, int n);

// int main(void) {

//   int *vet;
//   int n, resultado;
//   do {
//     printf("Informe n: ");
//     scanf("%d", &n);
//   } while (n < 0);

//   inicializar(vet, n);
//   atribuir(vet, n);
//   resultado = soma_impares_rec(vet, n);
//   printf("%d", resultado);
//   free(vet);
  
//   return 0;
// }

// void inicializar(int *vet, int n) {
//   vet = (int *) malloc (n * sizeof(int));
//   if(vet == NULL) { exit(1); }
// }

// void atribuir(int *vet, int n) {
//   for(int i = 0; i < n; i++) {
//     printf("Informe valor %d: ", i+1);
//     scanf("%d", &vet[i]);
//   }
// }

// int soma_impares_rec(int *vet, int n) {
//   int somatorio = 0;
//   int ultimo = n-1;
//   if(n == 0) { return 0; }
//   if ((n == 1) && (vet[0] % 2 != 0)) { return vet[0]; }
//   else { return 0; }
//   if (ultimo % 2 != 0) {
//     return somatorio + soma_impares_rec(vet, ultimo-1);
//   }
//  }
