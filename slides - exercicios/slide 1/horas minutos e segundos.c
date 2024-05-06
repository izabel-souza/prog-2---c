#include <stdio.h>

void converte(int entradaSegundos);

int main (void) {
    
    int totalSegundos, final;
    
    printf("Digite o total em segundos: ");
    scanf("%d", &totalSegundos);
    converte(totalSegundos);
    
    return 0;
}

void converte(int entradaSegundos){
	
    int seg, min, h, resto;
    
    h = entradaSegundos / 3600;
    resto = entradaSegundos % 3600;
    min = resto / 60;
    seg = resto % 60;
    
    printf("Quantidade de horas: %d;\nQuantidade de minutos: %d;\nQuantidade de segundos: %d", h, min, seg);
    
}
