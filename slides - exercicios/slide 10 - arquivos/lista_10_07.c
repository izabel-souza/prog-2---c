#include <stdio.h> <stdlib.h> <string.h>

int main (void) {

    float *vet;
    int n;
    do {
        printf("Informe n: ");
        scanf("%d", &n);
    } while (n < 0);
    vet = (float *) malloc(n * sizeof(float));

    for(int i = 0; i < n; i++) {
        printf("Informe valor %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    FILE *arquivo_ndec;
    arquivo_ndec = fopen("numeros.txt", "w");
    if (arquivo_ndec == NULL) { printf("ERRO"); exit(1); }
    for(int i = 0; i < n; i++) {
        fprintf(arquivo_ndec, "%f\n", vet[i]);
    }
    fclose(arquivo_ndec);

    for(int fim = (n-1); fim > 0; fim--) {
        for(int i = 0; i < fim; i++) {
            if (vet[i] > vet[i+1]) {
                int temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
    }

    FILE *fp;
    fp = fopen("numeros.bin", "wb");
    if (fp == NULL) { printf("ERRO"); exit(1); }
    for(int i = 0; i < n; i++) {
        fscanf(arquivo_ndec, "%f", vet[i]);
    }

    fclose(fp);

    return 0;
}