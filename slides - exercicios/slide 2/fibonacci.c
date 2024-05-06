#include <stdio.h>

int main(void) {
    
    int atual = 1, anterior = 1, prox, n;
    
    do {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 0);
    
    printf("%d %d ", atual, anterior);
    
    int i;
    for (i = 0; i < (n - 2); i++) {
        prox = atual + anterior;
        anterior = atual;
        atual = prox;
        printf("%d ", prox);
    }
    
    return 0;
}
