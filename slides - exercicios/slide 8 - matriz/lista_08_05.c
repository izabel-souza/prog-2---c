#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define X 3
#define Y 4

typedef int Matrix[X][Y];

void criacao_matriz(Matrix matriz_x);
void somatorio_matriz(Matrix matriz_n, Matrix matriz_m, Matrix matriz_o);
void imprime(Matrix matriz_x);

int main (void) {

  Matrix matriz_n;
  Matrix matriz_m;
  Matrix matriz_o;
  criacao_matriz(matriz_n);
  criacao_matriz(matriz_m);
  somatorio_matriz(matriz_n, matriz_m, matriz_o);
  imprime(matriz_n);
  imprime(matriz_m);
  imprime(matriz_o);
  
  return 0;
}

void criacao_matriz(Matrix matriz_x) {
  for(int i = 0; i < X; i++) {
    for(int j = 0; j < Y; j++) {
      printf("Informe [%d][%d]: ", i,j);
      scanf("%d", &matriz_x[i][j]);
    }
  }
}

void somatorio_matriz(Matrix matriz_n, Matrix matriz_m, Matrix matriz_o) {
  for(int i = 0; i < X; i++) {
    for(int j = 0; j < Y; j++) {
      matriz_o[i][j] = (matriz_n[i][j] + matriz_m[i][j]);
    }
  }
}

void imprime(Matrix matriz_x) {
    for(int i = 0; i < X; i++) {
      print("\n");
      for(int j = 0; j < Y; j++) {
        printf("%d", matriz_x[i][j]);
        printf("\n");
      }
  }
}



