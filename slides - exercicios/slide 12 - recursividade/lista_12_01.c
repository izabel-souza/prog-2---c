#include <stdio.h> <stdlib.h> <string.h>

int mdc_recursiva(int a, int b) {
    printf("\n%d e %d", a, b);
    if (a % b == 0) {
        return b;
    }
    return mdc_recursiva (b, a % b);
}

int main(void) {

    int a = 32, b = 18;
    printf("\nResultado=%d",mdc_recursiva(a, b));
    printf("2 será impresso na tela como MDC de 32 e 18");

    return 0;
}