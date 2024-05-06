#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pot_rec(int base, int expoente);

int main(void) {

  int base, expoente, resultado;
  do {
    printf("Informe a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
  } while (base < 0);

  resultado = pot_rec(base, expoente);
  printf("%d^%d = %d", base, expoente, resultado);
  
  return 0;
}

int pot_rec(int base, int expoente) {
  if (expoente == 0) { return 1; }
  if (expoente == 1) { return base; }
  return base * pot_rec(base, expoente-1);







  
}